// palindrome is a string which is same as the reverse of it 

#include<bits/stdc++.h>
using namespace std;
bool pal(char ch[], int len){
    int s=0;
    int e=len-1;
    while(s<=e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}


int main() {
cout<<"enter the string"<<endl;
char ch[100];
cin.getline(ch,100);
int result=pal(ch,strlen(ch));
if(result){
    cout<<"Valid Palindrome";
}
else
cout<<"Invalid palindrome";
return 0 ;
}