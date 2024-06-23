#include<bits/stdc++.h>
using namespace std;

void permut(string str,int index){          // by refrence pe answer glt aarha kyuki the main str on which we are making changes is got changed completely,
                                            // so to avoid this we are using the concept of bactracking and perform the reverse action.
    if(index>=str.length()){                
        cout<<str<<endl;
    }

    for(int i=index;i<str.length();i++){
        swap(str[i],str[index]);
        permut(str,index+1);
        swap(str[i],str[index]); // used the reverse action concept.
    }
   

}

int main(){

string ex="pqr";

permut(ex,0);

return 0;
}