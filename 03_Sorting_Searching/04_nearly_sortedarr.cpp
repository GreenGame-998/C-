#include<bits/stdc++.h>
using namespace std;

int nsa(int arr[],int n, int tar){
    int s=0;
    int e= n-1;
    int ans =-1;
    while(s<=e){
        int mid= s+ (e-s)/2;

        if(arr[mid-1]==tar && mid-1>=0){
           
           return mid-1;
        }
        if(arr[mid]==tar){
            
           return mid;
        }
        if(arr[mid+1]==tar&& mid+1<n){
           return mid+1; 
        }
        else if(tar<arr[mid]){
            e=mid-2; 
        }
        else if(tar>arr[mid]){
            s=mid+2;
        }
    }return ans;

}

int main(){
    int arr[]={20,10,30,40,50,60,70};
    int size=7;
    int target = 60; 
int index = nsa(arr,size,target);
if(index==-1){
    cout<<"index not found"<<endl;
}
else
cout<<"index of the target is: "<<index<<endl;

return 0;
}