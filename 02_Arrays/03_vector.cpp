#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    int size_ = sizeof(arr)/sizeof(int);
    cout<<size_<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert
    arr.push_back(5);
    arr.push_back(9);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    //remove
    arr.pop_back();
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }


    int batao = arr.empty();
    cout<<batao<<endl;
    cout<<arr.capacity();
}