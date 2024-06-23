#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1||n==0)  return 1;

    int help = fact(n-1);

    int ans = n*help;

return ans;
}

int main(){

    int n;
    cin>>n;
    int ans = fact(n);
    cout<< ans<<endl;

return 0;
}