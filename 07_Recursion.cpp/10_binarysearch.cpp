#include<bits/stdc++.h>
using namespace std;

int findtarget(int arr[],int s,int e, int target){
    if(s>e) return -1;
    int mid = s + (e-s)/2 ;
    if(arr[mid]==target){
        return mid;
    }
    else if (arr[mid]>target){
        findtarget(arr,s,mid-1,target);
    }
    else if(arr[mid]<target){
        findtarget(arr,mid+1,e,target);
    }
    
}

int main(){
  int arr[] = {10,20,30,40,50,60};
  int start = 0;
  int end =   5;
  int target = 60;
  int ans = findtarget(arr,start,end,target);
  cout<<ans<<endl;


return 0;
}