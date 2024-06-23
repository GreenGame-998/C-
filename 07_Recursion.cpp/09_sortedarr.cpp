// check whether the array is sorted or not.
#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int size,int index){
    if(index>=size)  return true ;

    if(arr[index-1]<=arr[index]){
     return sorted(arr,size,index+1);
    }
    else  return false;
   }

int main(){
int arr[] = {10,40,30,40,50};
int size = 5;
int index = 1;

if(sorted(arr,size,index)){
    cout<<"Yes";
}
else{
    cout<<"No";
}
return 0;
} 