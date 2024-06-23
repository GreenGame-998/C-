#include<iostream>
using namespace std;

int main(){
    // int arr[10];
    // char bek[123];
    // long gok[1567];
    // short mon[456];

    // cout<<"Arrays creation successful"<<endl;


// int a = 78;
// cout<<&a<<endl;

// int arr[100];
// cout<< &arr[0]<<endl;
// cout<< &arr[1]<<endl;
// cout<< &arr[2]<<endl;
// cout<<sizeof(arr);    

// int arr[5];
// for(int i=0;i<5;i++){
//     cout<<"Enter the value at index: "<<i<<endl;
//     cin>> arr[i];
//     cout<<endl;
// }

// for(int i=0;i<5;i++){
//     arr[i] = 2*arr[i];
//     cout<<endl;
// }

//  cout<<"array is:  ";
// for(int i=0;i<5;i++){
   
//     cout<< arr[i]<<"  ";
    


// }


int arr[]= {1,6,46,853,47,75};
int target = 67;
int n =sizeof(arr)/sizeof(arr[0]);

bool flag = 0;
// 0 represents not found
// 1 represents found

for(int i=0;i<n;i++){
    if(arr[i]==target){
        flag = 1;
        break;
    }
}
if(flag==1){
    cout<<"Target found";
}
else{
    cout<<"Target Not found";
}
return 0;
}