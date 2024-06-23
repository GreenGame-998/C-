#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};

    cout<< arr<<endl;
    cout<< arr[0]<<endl;
    cout<< arr+1<<endl; // will print the add of the container storing the value of arr[1]
    cout<<&arr[0] <<endl;
    cout<< *arr<<endl;
    cout<<*(arr) +1<<endl;
    cout<<*(arr +1)<<endl;
    cout<<*(arr +2)<<endl;
    cout<<*(arr +3)<<endl;
    // *(arr + i) means arr[i] and
    // *(i + arr) means i[arr] and is same as the above and is valid
    cout<<3[arr]<<endl;   // imp
    
    


return 0;
}