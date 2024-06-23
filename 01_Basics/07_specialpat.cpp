
#include<iostream>
using namespace std;
int main(){
int i,n;
cin>> n;

// // Flipped solid diamond 
// n=n/2;
// for(i=0;i<n;i++){
    
//     for(int j=n;j>i;j--){
//         cout<<"* ";
//     }
//     for(int j=0;j<2*i+1;j++){
//         cout<<"  ";
//     }
//     for(int j=n;j>i;j--){
//         cout<<"* ";
//     }
    
//     cout<<endl;
// }
// for(int a =0;a<n;a++){
//     for(int j=0;j<=a;j++){
//         cout<<"* ";
//     }
//     for(int j=0;j<2*(n-a)-1;j++){
//         cout<<"  ";
//     }
//     for(int j=0;j<=a;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }



//pyramid with num and star

// for(i=0;i<n;i++){
//     for(int j=0; j<2*i+1;j++){
//         if(j%2==0){
//             cout<<i+1<<" ";
//         }
//         else if(j%2!=0){
//             cout<<"* ";
//         }
//     } cout<<endl;
// }


// extended version of the above
// int num =n;
// n=n/2;
// for(i=0;i<n;i++){
//     for(int j=0; j<2*i+1;j++){
//         if(j%2==0){
//             cout<<i+1<<" ";
//         }
//         else if(j%2!=0){
//             cout<<"* ";
//         }
//     } cout<<endl;
// } 
// for(i=0;i<num;i++){
//     if(i%2==0){
//         cout<<num/2 +1<<" ";
//     }
//     else if (i%2!=0){
//         cout<<"* ";
//     }
//     } cout<<endl;
// for(i=0;i<n;i++){
//     for(int j=0;j<2*(n-i)-1;j++){
//         if(j%2==0){
//             cout<<n-i<<" ";
//         }
//         else if(j%2!=0){
//             cout<<"* ";
//         }
//     } cout<<endl;
// }


// // hollow inverted pyramid
// for(int a = 0;a<n;a++){
//     cout<<"* ";
// }cout<<endl;

// for(i=1;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         if(j==0||j==n-i-1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }cout<<endl;
// }

// hollow pyramid containing alphanumeric.
// int ini=1;
// cout<<ini<<endl;
// for(i=1; i<n;i++){
//     for(int j=0;j<2+i;j++){
//         if(j==0){
//             cout<<ini;
//         }
//         else if(j==i+1){
//             cout<<i+1;
//         }
//         else{
//             cout<<"  ";
//         }
//     }   cout<<endl;
    
    
// }
// for(i=0;i<n;i++){
//     cout<<"--";
// }

// abcdcba pattern

// i = (char)i;
// char j;
// for(i=0;i<n;i++){
//     for(j='A';j<='A'+i;j++){
//         cout<<j;
//     }
//     for(j=j-2;j>='A';j--){
//         cout<<j;
//     }
//     cout<<endl;
// }

// grid:
for(i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
       }
        cout<<endl;

}
return 0;
}