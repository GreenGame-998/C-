#include<iostream>
using namespace std;
// making pair out of elements of the array.
int main(){
int arr[]= {10,20,30};
int size =sizeof(arr)/sizeof(arr[0]);
for(int i=0; i< size;i++){
    for(int j=0;j<size;j++){
        printf("(%d,%d)",arr[i],arr[j]);
    } cout<<endl;
}
return 0;
}