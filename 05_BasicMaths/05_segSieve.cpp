#include<bits/stdc++.h>
using namespace std;

vector<bool>Sieve(int n){
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;

    for(int i=2;i*i<=n;i++){
        if(sieve[i]){
            int j=i*i;
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

vector<bool>SegSieve(int L, int R){
    vector<bool>sieve = Sieve(sqrt(R));
    vector<int>base_prime;

    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            base_prime.push_back(i);
        }
    }

    vector<bool>segs(R-L+1,true);
    if(L==0||L==1){
        segs[L]=false;
    }
    for(auto prime : base_prime){
        int first_mul = (L/prime)*prime;
        if(first_mul<L){
            first_mul+=prime;
        }
    int j= max(first_mul, prime*prime);
    while(j<=R){
        segs[j-L]=false;
        j+=prime;
    }
    }
    return segs;
}

int main(){
    int L = 2002;
    int R = 3000;

    vector<bool>seg = SegSieve(L, R);
    for(int i=0;i<seg.size();i++){
        if(seg[i]){
            cout<< L + i <<" ";
        }
    }


return 0;
}