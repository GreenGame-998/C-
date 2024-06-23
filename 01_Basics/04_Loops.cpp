#include<iostream>
using namespace std;

int main(){
    // for(int i=0;i<3;i++){
    //     cout<<"outer loop"<<i<<endl;
    //     for(int j=0;j<3;j++){
    //         cout<<"inner loop"<<j<<endl;
    //     }}

    int i=0;
    for(;;){
        if(i<5){
            cout<<"i is: "<<i<<endl;
        }
        i=i+1;
        
    }
    

    return 0;
}