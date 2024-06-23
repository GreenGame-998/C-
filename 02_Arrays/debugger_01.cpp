#include<bits/stdc++.h>
using namespace std;

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[j] = i+1;
        arr[n-j-1] = i+2;
        j++;
    }
}

int main(){
    int n=12;
int arr[n];
populate(arr,n);
for(int i:arr){
    cout<<i<<" ";
}

return 0;
}