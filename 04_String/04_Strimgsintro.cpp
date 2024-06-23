// char arrays are the static in nature whereas strings are dynamic in nature

#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    // cin>> name;
    getline(cin,name);      // spaces and tab donot act as delimeter
    cout<<name<<endl;
    
    int index =0;
    while(name[index]!='\0'){
        cout<<"index: "<< index<<endl;
        cout<<"character: "<< name[index]<<endl;
        index++;
    }
    cout<< "value of the last index: "<<index<<endl;
    cout<< "value: "<<int('\0')<<endl;

    return 0;
}