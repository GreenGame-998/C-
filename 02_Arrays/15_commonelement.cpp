#include<bits/stdc++.h>
using namespace std;

int main(){

int arr1[]={1,5,10,20,40,80};
int arr2[]={6,7,20,80,100};
int arr3[]={3,4,15,20,30,70,80,120};

vector<int>ans;
int len1= sizeof(arr1)/sizeof(arr1[0]);
int len2= sizeof(arr2)/sizeof(arr2[0]);
int len3= sizeof(arr3)/sizeof(arr3[0]);
int i,j,k;
i=j=k=0;
while(i<len1 && j<len2 && k<len3){

    if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
        ans.push_back(arr1[i]);
        i++;
        j++;
        k++;
    }
    else if(arr1[i]<arr2[j]) i++;
    else if(arr2[j]<arr3[k]) j++;
    else k++;
}
cout<<"working"<<endl;

for(auto i:ans){
    cout<<i<<" ";
}



return 0;
}