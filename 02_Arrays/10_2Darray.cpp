#include<bits/stdc++.h>
using namespace std;

void print_Arr(int arr[3][3]){
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

void rowsum(int arr[3][4],int size){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<"sum of row "<<i<<" is: "<<sum<<endl;
    }
}

void sum_dia(int arr[3][3],int size){
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=arr[i][i];
    }
    cout<<"sum of diagonal elements is: "<<sum<<endl;
}


void swaparr(int arr[3][3],int size){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}

bool findtarget(int arr[3][3], int target){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        if(arr[i][j]==target){
            return true;
        }
        }
    }
    return false;

}

int main(){
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int sq_arr[3][3] = {
        {1, 2, 3},
        {4, 10, 6},
        {7, 8, 9}
    };
int size1= sizeof(arr)/sizeof(arr[0]);
    // rowsum(arr,size1);
   
int size2= sizeof(sq_arr)/sizeof(sq_arr[0]);
    // sum_dia(sq_arr,size2);
// swaparr(sq_arr,size2);
// cout<<"Doing transpose"<<endl;
// print_Arr(sq_arr);

cout<<findtarget(sq_arr,10)<<endl;
cout<<findtarget(sq_arr,20)<<endl;

return 0;
}