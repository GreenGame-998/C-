#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s, int e){
int mid = s + (e-s)/2;

int leftlen = mid-s+1;
int rightlen = e-mid;

int *left = new int[leftlen];
int *right = new int[rightlen];

int k=s;
for(int i=0;i<leftlen;i++){
    left[i]=arr[k];
    k++;
}

k=mid+1;
for(int i=0;i<rightlen;i++){
  right[i]=arr[k];
  k++;
}

int mergeindex=s;
int leftindex=0;
int rightindex=0;

while(leftindex<leftlen && rightindex<rightlen){

  if(left[leftindex]<right[rightindex]){
    arr[mergeindex]=left[leftindex];
    leftindex++;
    mergeindex++;
  }

  else{
    arr[mergeindex]=right[rightindex];
    rightindex++;
    mergeindex++;
  }

}


while(leftindex<leftlen){

  arr[mergeindex]=left[leftindex];
  leftindex++;
  mergeindex++;

}

while(rightindex<rightlen){

arr[mergeindex]=right[rightindex];
  rightindex++;
  mergeindex++;

}

delete[] left;
delete[] right;

}

void merge_sort(int arr[],int s,int e){
  int mid = s +(e-s)/2;
  if(s>=e) return;
// left part
  merge_sort(arr,s,mid);

  // right part
  merge_sort(arr,mid+1,e);

// calling merge_sort funct
merge(arr,s,e);
  
}


int main(){

int arr[] = {1,5,3,6,0,9};
int size = 6;
int s=0;
int e=5;


cout<<"before merge sort"<<endl;

for(int i :arr){
  cout<<i<<" ";
}
cout<<endl;

merge_sort(arr,s,e);

cout<<"after merge sort"<<endl;
for(int i :arr){
  cout<<i<<" ";
}

return 0;
}