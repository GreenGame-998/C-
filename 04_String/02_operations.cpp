#include<bits/stdc++.h>
using namespace std;

int findlength(char ch[],int size){
    int length =0;

    for(int i=0; i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else
        length++;
    }
    return length;
}

void reverse(char ch[],int length){
    int s=0;
    int e = length-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}

int main (){
    char ch[100];
    cout<<"enter the char:"<<endl;
    // cin>>ch; // read the first word only
    cin.getline(ch,100); // read the whole character with space
    int len = findlength(ch,100);

    // cout<<"the length is : "<<len<<endl;
    // cout<<"the length is : "<<strlen(ch)<<endl; // the inbuilt function-- count beyound spaces until null char is reached.

     reverse(ch,len);
    cout<<"the revrse is: "<< ch;
    return 0;


} 