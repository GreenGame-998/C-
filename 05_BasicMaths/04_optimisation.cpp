#include<bits/stdc++.h>
using namespace std;

vector<bool>Sieve(int n){
    vector<bool>sieve(n+1, true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i<=(n)^(1/2);i++){                      //i<=n^0.5 as in the inner loop j=i*i and sieve[] is upto n so after n^0.5 j>n and therefore the inner
        if(sieve[i]){                                       // loop will not run.
            int j=i*i;
        // int j=i*2;                           // in case of 2 we have mark 2,4,6,8,10;
        while(j<=n){                            // in case of 3 we have mark 3,6,9,12;  --- some of them are already marked by 2
            sieve[j]=false;                     // in 5 it is 5,10,15 etc ------>> so to reduce this we start our j as j=i*i which prevent more than marking
            j+=i;
        }}
    }
    return sieve;
    // time complexity is nlog(logn)
}

int main(){
    int n;
    cin>>n;
vector<bool>prime= Sieve(n);
for(int i=0;i<=n;i++){
    if(prime[i]){
        cout<<i<<"  ";
}}
return 0;
}