#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a,b;
cin>>a>>b;

int ans=gcd(a,b);
cout<<ans;

return 0;

}