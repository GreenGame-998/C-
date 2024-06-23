#include<bits/stdc++.h>
using namespace std;
void print(int n){ 
    if(n==0){
        return ;
    }
    
    cout<<n<<" ";
    print(n-1);
}

void Print(int n){
    if(n==0){
        return ;
    }
    Print(n-1);
    cout<<n<<" ";
} 

int main(){
   int n;
   cin>>n;
   print(n);        // reverse printing
   Print(n);        // normal printing
return 0;
}