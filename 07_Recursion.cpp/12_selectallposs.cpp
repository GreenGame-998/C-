// Given a line segment of length n and you need to cut it into segments of only x,y and z length.
// At the end give the maximum possible outcome.

#include<bits/stdc++.h>
using namespace std;
int msc(int n, int x , int y,int z){   // msc --> maximum segment cuts
    
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    int opt1 = 1 + msc(n-x,x,y,z);

    int opt2 = 1 + msc(n-y,x,y,z);

    int opt3 = 1 + msc(n-z,x,y,z);
    int ans = max(opt1,max(opt2,opt3));   // max vala sirf 2 pe hi operate hota, so 2 bar max lagana hota.
    return ans;
}
int main(){
int arr[] = {12,4,67,4,5,79,34,7,34,8,9};
int size = 11;
int x = 2;
int y =3;
int z= 4;
int ans = msc(size,x,y,z);
cout<<ans;
return 0;
}