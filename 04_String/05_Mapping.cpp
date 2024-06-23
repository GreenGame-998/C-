#include<bits/stdc++.h>
using namespace std;

string mapping (string key, string message){
    char start = 'a';
    char mapping[1000] = {0};   // 0 in character shows that it is the null point.
    for(auto i: key){
        if(i !=' ' &&  mapping[i]==0){
            mapping[i]=start;
            start++;
        }}
    string ans;
    for(auto i:message){
        if(i==' '){
            ans.push_back(' ');
        }
        else{
        char decode = mapping[i];
        ans.push_back(decode);
        }
        }
        return ans;
}


int main() {

}