#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;
    cout<<"add of a: "<<&a<<endl;

    
    int* ptr = &a;  // pointer creation
    cout<<"address of a: "<<ptr<<endl;
    cout<<"accessing: "<<*ptr<<endl; // acessing value stored at add stored in ptr
    cout<< &ptr<<endl; // add of block of ptr
    cout<< *(&ptr)<<endl;  // value stores at the address of ptr


cout<<sizeof(ptr)<<endl; // size of ptr
char* cptr= "lala";
cout<<sizeof(cptr)<<endl;// size of char pointer is same as int ptr


 return 0 ;
}