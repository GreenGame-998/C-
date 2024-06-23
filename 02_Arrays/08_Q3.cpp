#include<iostream>
using namespace std;



void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void shiftby1(int arr[],int n){

int store = arr[n-1];
for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}

arr[0]= store;

}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
     
    shiftby1(arr,size);
    printArr(arr,size);
return 0;
}