#include<bits/stdc++.h>
using namespace std;

int palindrome(string s){
    int n = s.length();
    int i=0;
    int j=0;
    int max=1;
    for(int k=0;k<n;k++){
        i=k;
        j=k;
        // for odd no. of string
        while(i>=0 && j<n && s[i]==s[j]){
            if(max<j-i+1){
                  max = j-i+1;
            }
            i--;
            j++;
        }

        // for even length
        i=k;
        j=k+1;
        while(i>=0 && j<n && s[i]==s[j]){
          if(j-i+1>max){
            max=j-1+1;
          }
          i--;
          j++;
        }
    }
    return  max;
}




int main(){
    string s = "aaaaabbbbaaaa";
    int ans = palindrome(s);
    cout<<ans;
}