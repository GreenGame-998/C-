#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin >> n;
    sum=0;
    vector<int>input;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        input.push_back(s);
    }
     for(int i=0; i<n; i++){
        sum = sum + input[i];
    }
    cout << sum << endl;
    return 0;
}