#include<bits/stdc++.h>
using namespace std;

int find_pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int ans;
    while(s<=e){
        int mid= s +(e-s)/2;
        if(s==e){
            return s;
        }
        else if(arr[mid]<arr[mid-1]){
           return mid-1;
        }
        else if(arr[mid]>arr[mid+1]){
            
            return mid;
        }
        else if(arr[mid]<arr[s]){
            e=mid-1;
        }
        else if(arr[mid]>arr[s]){
            s=mid+1;
        }
        else{
            return -1;
        }
        
    }
return ans; //returning only index
}

int find_target(int arr[],int n,int target){
int s=0;
int e=n-1;
if(target<arr[s]){
        s=1+find_pivot(arr,n);
    }
    else{
        e=find_pivot(arr,n);
    }

while(s<=e){
    int mid= s +(e-s)/2;
    if(target==arr[mid]){
        return mid;
    }
    else if(target<arr[mid]){
        e=mid-1;
    }
    else if(target>arr[mid]){
        s=mid+1;
    }
}
return -1;
}

int main(){
    int arr[]={6,8,10,12,14,16,2,4};
    int size=8;
    int target=16;
int index  = find_target(arr,size,target);
if(index==-1){
    cout<<"target is not in the arr";
}
else
cout<<"the target is at the index: "<<index;
return 0;
}