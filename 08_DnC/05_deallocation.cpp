// given an array, in which we have to find the no of ways where the same element donot occur at the same index.

#include<bits/stdc++.h>
using namespace std;

int dearr(int size){

if(size==1) return 0;
if(size==2) return 1;

int ans = (size-1)*(dearr(size-1) + dearr(size-2));

//(size-2) when we fix the position of the element whose position is taken by the considered element, (size-1) when it is not fix.
return ans;

}

int main(){

int size=3;
int ans=dearr(size);

cout<<ans<<" ";

return 0;
}