/* Given an array of size N and and integer X
we have to find that if any two number in an array sums to X.
*/

#include<bits/stdc++.h>
using namespace std;

bool matchfunction(int arr[],int size, int X){
    sort(arr, arr + size);
    int s =0;
    int e= size -1;
    while(s<e){
        int csum= arr[s]+arr[e];
        if(csum==X){
            return true;
        }
        else if(csum<X){
            s++;
        }
        else
            e--;
        
    }

    return false;
}

int main(){

    int arr[]= {3,66,13,67,34,5,6,1};
    int X = 11;
    bool ans=matchfunction(arr,sizeof(arr)/sizeof(arr[0]),X);
    if(ans==true){
cout<<"Yes";
    }
else{
    cout<<"No";
}
return 0;
}