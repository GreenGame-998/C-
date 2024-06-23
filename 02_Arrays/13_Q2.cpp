#include<bits/stdc++.h>
using namespace std;
// sorting o,1 and 2's using two pointers approach.

void sortcolor(int arr[],int n){
    int j=0;
    int k=1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
            k++;
        }
        else if(arr[i]==1){
            swap(arr[i],arr[k]);
            k++;
            }}}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={0,0,1,2,1,0,2,1,0,1,2,2,1,0};
    int size= sizeof(arr)/sizeof(arr[0]);
    sortcolor(arr,size);
    print_arr(arr,size);
return 0;
}