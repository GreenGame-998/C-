#include<bits/stdc++.h>
using namespace std;

int main(){

char ch[50] = "lovingly";

char* cptr= ch;

cout<<ch<<endl;
cout<<&ch <<endl;
cout<< cptr<<endl;
cout<< *cptr<<endl;
cout<< *(cptr+3)<<endl;
cout<< cptr+2<<endl;



return 0;
}