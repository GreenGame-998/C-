#include<bits/stdc++.h>
using namespace std;

int powerof2(int n){
    if(n==0) return 1;
  int ans = 2*powerof2(n-1);

return ans ;
}

int main(){
cout<<powerof2(10);
return 0;
}