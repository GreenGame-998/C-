#include<iostream>
#include<vector>
using namespace std;

int findmountain(vector<int>arr){
    int size = arr.size();
    int s=0;
    int e= size-1;
    
    while(s<e){
        int mid=s +(e-s)/2;

        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        
    }return s;
}

int main(){
    vector<int>arr{10,20,30,40,80,70,60};
    cout<<"using vector"<<endl;
    int ans=findmountain(arr);
    cout<<arr[ans];
return 0;
}