#include<bits/stdc++.h>
using namespace std;

int main(){
// string s1 = "anagram";
// string s2 = "nagarma";
string s1 = "car";
string s2 = "rat";

sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());

if(s1==s2) cout<<"Yes"<<endl;
else cout<<"No"<<endl;



return 0;
}