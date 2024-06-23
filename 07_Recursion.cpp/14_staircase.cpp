#include<bits/stdc++.h>
using namespace std;

int staircase(int n){
if(n==0) return 1;
if(n<0) return 0;
int first =staircase(n-1);
int sec = staircase(n-2);
return first + sec;


}

int main(){

int mission = 20;

int ans = staircase(mission);
cout<<ans<<endl;

return 0;
}