#include<iostream>
using namespace std;

int incrementBy1(int n){
    n = n+1;
    return n;
}
int main(){
    // int n = 5;
    // int &k = n;        ---- call by reference
    // int &c= n;
    // cout<<"n is: "<<n<<endl;
    // cout<<"k is: "<<k<<endl;
    // cout<<"c is: "<<c<<endl;

    int n;
    cin>> n ;
    int n = incrementBy1(n);        // assigned value in n, other value of n in the main remain same as i/p.
    cout<<"n :" <<n<<endl;

return 0;
}