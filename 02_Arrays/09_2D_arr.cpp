#include<iostream>
using namespace std;

void print2D_arr(int arr[][4],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

void colwisePrint(int arr[][4],int row, int col){            //print column wise
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
}

int array_maker(int arr[][4],int row,int col){
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"i/p for index"<<i<<","<<j<<" ";
            cin>> arr[i][j];
}
cout<<endl;
}}

int main(){
    int arr[3][4];
    int brr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int crr[][2] = {{1,2},{3,56}};      // insertion of col. is must
    array_maker(arr,3,4);
    print2D_arr(arr,3,4);
}