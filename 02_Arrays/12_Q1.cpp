#include<bits/stdc++.h>
using namespace std;
// given an arr where shift all negative numbers
void shiftnegNum(int arr[],int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    // int arr[]={-2,9,6,-3,-6,8,45,-12};
    int arr[]={-2,-3,-78,-42};

    int size=4;
    shiftnegNum(arr,size);
    print_arr(arr,size);
}