#include<iostream>
using namespace std;

// void fun(int &num,int k){
//         num &= (~(1<<k));
//     }
bool function(int n, int k) {
        bool bit =n & (1<<k);
        return bit;
    }    
int main(){
     // int num = 7;
    // int k =1;
    // fun(num,k);
    // cout<<num<<endl;

    // int num = 5;
    // cout<<(~num + 1)<< endl;
    int n =5;
    int k=2;
    cout<<function(n,k);
    
    return 0;
}