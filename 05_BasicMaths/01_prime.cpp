#include<bits/stdc++.h>
using namespace std;

int findprime(int n){
    if(n==0) return 0;

    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
int count = 0;
    for(int i =2;i<n;i++){
        if(prime[i]){
            count++;

        int j=2*i;
        while(j<n){
            prime[j]=false;
            j+=i;
        }
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    int ans=findprime(n);
    cout<<ans;
return 0;
}
