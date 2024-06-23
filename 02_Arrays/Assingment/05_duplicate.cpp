/*
Find the Duplicate: given an array where the elements belong to [1,n]
size of the array is n+1,  and we have to find the duplicate number

method 1: sort the array and then check for arr[i]=arr[i+1].
time complexity--> O(nlogn)
space complexity--> O(n)

method 2: as the number is from 1 to n and also index is upto n, so we can treat arr[i] as index for other elements.
now we make the elements as negative(for marking purpose) and when we visit the same elements next time(which we will be doing in case of duplicate number
as the index will going to be same, then we find our ans)
time complexity O(n), and space complexity is O(1).
*/

#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int size){
    int ans= -1;
    int index;
    for(int i=0; i<size-1;i++){
        index=abs(arr[i]);
        if(arr[index]<0){
            ans=index;
            break;
        }
        else{
            arr[index] = -arr[index];
        }
    }
    return ans;
}

int main(){
    int arr[]= {2,2,2,2,2};
    int answer = duplicate(arr, sizeof(arr)/sizeof(arr[0]));

    cout<<answer;
return 0; 
}