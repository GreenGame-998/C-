#include<bits/stdc++.h>
using namespace std;
void searchtarget(int arr[],int size,int target, int index){
    if(index>=size) return;
    if(arr[index]==target){
        cout<<index<<endl;
    }

    searchtarget(arr,size,target,index+1);
    
}

void doubleelements(int arr[],int size,int index){
    if(index>=size){
     return;
     }
    arr[index]*=2;
    doubleelements(arr,size,index+1);
}
int main(){
    int arr[]= {10,20,10,40,50,10};
    searchtarget(arr,6,10,0);
    // cout<<"index of target is  "<<searchtarget(arr,6,60,0);
    // doubleelements(arr,6,0);
    // for(int num :arr){
    //     cout<<num<<endl;
    // }
return 0;
}