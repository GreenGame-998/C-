#include<bits/stdc++.h>
using namespace std;

void printdigits(int digit){
    if(digit==0) return;
    int rem = digit%10;
    digit/=10;
    printdigits(digit);
    cout<<rem<<endl;
}

int main(){
printdigits(4215);
return 0;
}