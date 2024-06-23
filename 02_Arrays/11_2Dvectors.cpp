#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>arr(5,vector<int>(10,0));
    // initialising the 2d vector having row 5 and col 10 each one of having value 0;
    vector<int>vec1= {31,4,5};
    vector<int>vec2= {4,2,8,90};
    vector<int>vec3= {34,5};
    vector<int>vec4= {3,7,43,1,4,7,5};
arr.push_back(vec1);
arr.push_back(vec2);
arr.push_back(vec3);
arr.push_back(vec4);
arr[0]=vec1;
arr[1]=vec2;
arr[2]=vec3;
arr[3]=vec4;
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j];
        } 
        cout<<endl;
    } 
  
}