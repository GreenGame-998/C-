class solution
{
    public:


    bool possi(int a[],int n,int m,int sol){
        int pgs=0;
        int c=1;

        for(int i=0;i<n;i++){
            if(a[i]>sol) return false;

            if(pgs + a[i]>sol){
                c++;
                pgs = a[i];
                
                if(c>m) return false;
            }
            else{
                pgs+=a[i];
            }
        }
        return true;
    }

    int findpages(int a[],int N, int M){

        if(M>N) return -1;

        int start =0;
        int end =0;
        // int end = accumulate(a,a+N,0);
        for(int i=0;i<N;i++){
            end+=a[i];
        }

        int ans = -1;

        while(start<=end){
            int mid = (start+end)>>1;
            
            if(possi(a,N,M,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;



    }
};