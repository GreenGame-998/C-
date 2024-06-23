// find the maximum sum of the non adjacent elements in an array.

#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int size = nums.size();
    if(size<=1) return 0;
    
    // making the vector 1;

    vector<int>v1;

    for(int i=2;i<size-1;i++){
        v1.push_back(nums[i]);
    }

    // making the vector 2;
    vector<int>v2;

    for(int i=3;i<size;i++){
        v2.push_back(nums[i]);
    }

    int sum1= nums[0]+rob(v1);
    int sum2= nums[1]+rob(v2); 

    return max(sum1,sum2);
}

int main(){

vector<int>arr={1,2,3,4,5};
int ans = rob(arr);
cout<<ans<<endl;

return 0;
}