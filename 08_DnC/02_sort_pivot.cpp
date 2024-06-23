#include<bits/stdc++.h>
using namespace std;

void pivot_sort(int arr[],int start,int end){
 int j=start;
 int i=j-1;
int pivot=end;

if(start>=end) return; // base condtition


while(j<pivot){
    if(arr[j]<arr[pivot]){
        i++;
        swap(arr[i],arr[j]);
    }
    j++;
}
swap(arr[++i],arr[pivot]);
pivot_sort(arr,start,i-1); // divide the arr in left part of i
pivot_sort(arr,i+1,end);    // divide the arr in right part of i

} 

int main(){

int arr[] = {7,2,1,8,6,3,5,4};
int size = sizeof(arr)/sizeof(arr[0]);
pivot_sort(arr,0,7);

for(int i:arr){
    cout<<i<<" ";
}
return 0;
}