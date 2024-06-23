#include<bits/stdc++.h>
using namespace std;

void subsequence(string input, string output,int index){
    if(index>=input.length()){
        cout<<output<<endl;
        return;
    }
    char ch = input[index];

    // exclude
        subsequence(input,output,index+1);
    
    // include
        output.push_back(ch);
        subsequence(input,output,index+1);

        // if we put exclude code below the include one then we have to pop
        //  back the element in order to exclude it as it as been already been included.
}

int main(){
    string s = "abc";
    string e = "";
    subsequence(s,e,0);

return 0;
}