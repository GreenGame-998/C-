//given a fence with n posts and k colors . find the no. of ways of painting the fence so that at most 2 adjacent are painted with same color.

#include<bits/stdc++.h>
using namespace std;

int fence(int post, int color){
   
   if(post==1) return color;
   if(post==2) return color*color;

int ans = (color-1)*(fence(post-1,color)+fence(post-2,color));

return ans;
}


int main(){
    int ans=fence(3,3);
    cout<<ans<<endl;


return 0;

}