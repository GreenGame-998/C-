

#include<iostream>
#include<limits.h>

using namespace std;

int main(){
// Find the minimum no. in your array

    // int arr[]= {46,794,265,7,64,766,34};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int min_ans = INT_MAX;
    // for(int i=0;i<n;i++){
    //     min_ans = min(arr[i],min_ans);
    // }
    // cout<<"The min value in the array is: "<<min_ans;
    // // cout<<INT_MAX;

// Reverse the arrays

int arr[] = {1,2,3,4,6};
int size = sizeof(arr)/sizeof(arr[0]);
int size_ = size/2;
int a;
for(int i=0;i<size_;i++){
    // a=arr[i];
    // arr[i] = arr[size-i-1];
    // arr[size-i-1] = a;
    
    swap(arr[i],arr[size-i-1]);
    }
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}