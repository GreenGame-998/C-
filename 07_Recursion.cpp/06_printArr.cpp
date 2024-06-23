#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int size,int index){
    if(index>=size) return ;
cout<<arr[index]<<" ";
    printArr(arr,size,index+1);
}

int main(){
int arr[]={2,4,5,6,7,8};
printArr(arr,6,0);
return 0;
}