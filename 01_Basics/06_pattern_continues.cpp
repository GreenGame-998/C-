#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;
// n = n/2;            // only for diamond pyram

// full pyramid

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<< " ";
//     }
//     for(int j=0;j<=i;j++){
//         cout<< "* ";
//     } cout<< endl;
// }

// // Inverted pyramid

// for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<< " ";
//     }
//     for(int j=0;j<n-i;j++){
//         cout<< "* ";
//     } cout<< endl;
// }

// Hollow pyramid

// n = n/2;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<< " ";
//     }
//     for(int j=0;j<=i;j++){
//         if(j==0||j==i){
//         cout<< "* ";}
//         else{
//             cout<<"  ";
//         }
//     } cout<< endl;
// }

// // Inv. hollow pyramid
// for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<< " ";
//     }
//     for(int j=0;j<n-i;j++){
//         if(j==0||j==n-i-1){
//         cout<< "* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     } cout<< endl;
// }



return 0;
}
