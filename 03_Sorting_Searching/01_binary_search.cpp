#include<bits/stdc++.h>
using namespace std;

int binaryS(int arr[],int size, int target){
    int start=0;
    int end = size-1;
    // int mid = (start+end)/2;  // chances of integer overflow
    int mid = start+(end-start)/2; // best practice

    while (start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        mid = (start+end)/2;
    
    }
    return -1;
}
int findfirstOcc(int arr[],int size, int target){       // for last occurence--just change the start=mid+1
    int start=0;
    int end = size-1;
    // int mid = (start+end)/2; // chances of integer overflow
    int mid = start+(end-start)/2; 
    int ans=-1;

    while (start<=end){
        if(arr[mid]==target){
            ans=mid;
            end = mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        mid = (start+end)/2;
    
    }
    return ans;
}

int findlastOcc(int arr[],int size, int target){       
    int start=0;
    int end = size-1;
    // int mid = (start+end)/2; // chances of integer overflow
    int mid = (start+(end-start))/2; 
    int ans=-1;

    while (start<=end){
        if(arr[mid]==target){
            ans=mid;
            start= mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        mid = (start+end)/2;
    
    }
    return ans;
}
int totaloccurence(int arr[],int size,int target){
   int first = findfirstOcc(arr,size,target);
   int last = findlastOcc(arr,size,target);
   return last-first;
}

int findmissing(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid= s +(e-s)/2;
    int ans= -1;
    while (s<=e)
    {
        int diff = arr[mid]-mid;

        if(diff==1){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    if(ans==-1){
        return size+1 ;
    }
    return ans+1;   // as ans is the index
}

int main(){
    int arr[]={10,20,30,30,30,60,70,70,90};
    int arr_[]={1,2,3,4,5,6,7,8};
    int size = 9;
    int size_=8;
    int target = 30;
    // int final_ans = findfirstOcc(arr,size,target);
    // int final_ans = binaryS(arr,size,target);

    // if( final_ans== -1){
    //     cout<<"target not in list";
    // }
    // else{
    //     // cout<<"the index of the target is: "<<final_ans;
    //     cout<<"the index of the target(of first occurence) is: "<<final_ans;
    // }
    int ans= findmissing(arr_,size_);
    if(ans==-1){
        cout<<"nothing is missing";
    }
    else{
        cout<<"missing no is: "<< ans;
    }

    return 0;
}