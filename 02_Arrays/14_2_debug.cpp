#include<bits/stdc++.h>
using namespace std;


void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return;
        }
    }
    return;
}

int main(){
int arr[]={3,4,5,6,3,2};
int size = sizeof(arr)/sizeof(arr[0]);
int value = 5;
linearSearch(arr,size,value);

return 0;

}