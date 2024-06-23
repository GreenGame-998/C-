#include<bits/stdc++.h>
using namespace std;

# define veci vector<int>

class abc{
    int x;        // mutable int x;
    int *y;
    const int z;
    public:
       

    //     abc(int _x, int _y, int _z=0){
    //     x = _x;
    //     y = new int (_y);
    //     z=_z;// here cann't reinitailise z;
    //    } 


    // initialisation list 
    abc(int _x, int _y,int _z): x(_x), y(new int(_y)),z(_z){

        // here z even being const get reintialised in the initialisation list
        // can do something here also.
    }

       int getX()const   // so that our value of x cann't change;
       {  
        // x = 60; this will not happen;  but if we want to chnage this we'll use mutable int x;
        return x;
       } 

       int setX(int _val){
        x = _val;
       }


        int getY()const{

            int f = 9;
            // y = &f; this willnot happen
        return *y;
       } 

       int setY(int _val){
        *y = _val;
       }
};

void print(const abc &a){    // this function can only call const function;
    cout<< a.getX()<<" "<<a.getY()<<endl;
}



int main(){

        abc a(1,2,3);
        // print(a);

        veci arr;
        arr.push_back(1);
        arr.push_back(10);
        cout<<arr[0]<<" ";
        cout<<arr[1];






    // const int a = 10;
    // a=15; cann't change the value of the a;



//  // const with pointers

//    const int *a = new int(2);  // const data, Non-const pointer ---> const before * make the data const
//    int const *a = new int (2);// same as above
// //    *a=9;  can't change the data of the pointer
//     cout<<*a<<endl;


//     int b=5;
//     a = &b;  // can reassign the value of the pointer but the data init remains const.
//     cout<<*a<<endl;



// // const pointer and non const data

// int *const a = new int(2);   // 
// cout<<*a<<endl;

// *a = 20;
// cout<< *a<<endl;

// int b = 90;
// a = &b;// can't change value of pointer





// // const data and const pointer

// const int *const a = new int(2);
// *a = 2;// cann't change

// int b= 90;

// a = &b; // cann't change;









   

   


return 0;
}