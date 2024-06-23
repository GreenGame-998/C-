#include<bits/stdc++.h>
using namespace std;

int mincoin(vector<int>coins, int amount){
    if(amount==0) return 0;
int ans =INT_MAX;
for(int i=0;i<coins.size();i++){
    int value = coins[i];
    if(value<=amount){
        int help = mincoin(coins,amount-value);
        if(help<INT_MAX) {
            ans = min(ans,1+ help);
        }
    }
    
}
return ans;
}

int samadhan(vector<int>coins, int amount){
    int answer = mincoin(coins,amount);
    if(answer>=INT_MAX){
        return -1;
    }
    else return answer;
}

int main() {
    vector<int> coins{2};
    int amount = 3;
    int ans = mincoin(coins, amount);
    cout << ans;
    return 0;
}
