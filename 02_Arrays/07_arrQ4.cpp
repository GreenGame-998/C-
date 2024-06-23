#include<bits/stdc++.h>
using namespace std;
// given an array into which we have to seperate the number of the zeroes and ones.

void sorter(int arr[],int size){
    int cout_zero=0;
    int cout_one=0;
    for(int  i=0;i<size;i++){
        if(arr[i]==0){
            cout_zero++;
        }
        else if(arr[i]==1){
            cout_one++;
        }
    for(int i=0;i<cout_zero;i++){
        arr[i]=0;
    } 
    for(int i=cout_zero+1;i<cout_one;i++){
        arr[i]=1;
    } 
    }
}


void printarr(int arr[],int size){
    cout<<"{";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }cout<<"}";
}
int main(){

int arr[]= {1,0,0,1,1,1,0,0,1,0};
int size= sizeof(arr)/sizeof(arr[0]);
sorter(arr,size);
printarr(arr,size);
    
return 0;
}