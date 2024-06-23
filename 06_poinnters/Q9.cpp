#include<bits/stdc++.h>
using namespace std;

int main(){
    char st[] = "ABCD";
    for(int i=0;st[i]!='\0';i++){
        cout<< st[i]<<*(st)+i<<*(i+st)<<i[st];
        cout<<endl;
    }
    // if we simply cout the *(st) + i then, the compiler thing of it as the integer and gives the int value;
    // but if it is like char a = 'A' + 1, then it will print B as the O/P;
    char a = 'A' + 1;
    cout<<a<<endl;
    cout<<'A'+1;

return 0;
}