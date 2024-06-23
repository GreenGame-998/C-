#include<bits/stdc++.h>
using namespace std;

int BS(int arr[],int s,int e,int x){
    while(s<=e){
        int mid = (e-s)/2 + s;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else e=mid-1;
    }
    return -1;
}

int ExpoSearch(int arr[],int n, int x){
    if(arr[0]==n) return 0;
    int i=1;
    while(i<n && arr[i]<=x){
        i*=2;
    }
    return BS(arr,i/2,min(i,n-1),x);

}


int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,72};
    int size = sizeof(arr)/sizeof(int);
    int target = 13;

    int index=ExpoSearch(arr,size,target);

    cout<<index<<endl;



return 0;
}