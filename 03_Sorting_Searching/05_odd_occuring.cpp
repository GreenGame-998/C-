// all elements occurs even times and in pairs only, not more than 2 times continously

#include<bits/stdc++.h>
using namespace std;

int findOddOccuring(int arr[],int n){
    int s=0;
    int e=n-1;
    int ans=-1;

    while(s<=e){
        if(s==e){
            return s;
        }
    int mid = s + (e-s)/2;

    if(mid & 1){        // finding mid is odd or not
        if(arr[mid]==arr[mid-1]&& mid-1>=0){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    else{
        if(arr[mid]==arr[mid+1]&& mid+1<n){
            s=mid+2;
        }
        else{
            e=mid;
        }
    }
    }
}


int main(){
    int arr[]={10,10,2,2,5,5,3,5,5,20,20,11,11,10,10};
    int size = 16;
    int ans = findOddOccuring(arr,size);
cout<<"The odd one is: "<<arr[ans];

return 0;

}