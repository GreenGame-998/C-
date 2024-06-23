#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string gf;
public:
    string name;    // size 24 byte----  string is a type of class itself.
    int age;    // size 4 byte
    int id; // size 4 byte
    int nos;
    int present;
    
    // bool res;   // size is 1 but compiler add 3 bytes more(padding)

//constructor--- it is the function that get called when ever the object get called-- hence it should be in public
// only fun which has no return type.. const is an instances of the class
     Student(){
        cout<<"yo, les go"<<endl;
    }

// parameterized ctor
    Student(string _name, int _age, int _id, int _nos, int _present, string _gf){
        name = _name;
        age= _age;
        id= _id;
        nos = _nos;
        present = _present;
        gf = _gf;
    
    cout<<"parameterized ctor called"<<endl;

    }

    Student(string name, int age, int id, int nos, int present ){       // using "this" attributor we can point towards the properties of the class
        this->name= name;                                               // "this" pointer is added by the compiler privately
        this->age= age;
        this ->id = id;
        this->nos = nos;
        this->present= present;
    }

    void study(){
        cout<<"Studying"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
private:
    void gfchat(){
        cout<<"chatting"<<endl;
    }
};

int main(){

    Student s1;         // s1 is a type of object
    

    Student s2("Raj",19,230219,5,1,"unk"); // parameterized ctor called

    cout<<s2.name<<endl;
    cout<<s2.age<<endl;
    cout<<s2.id<<endl;
    cout<<s2.nos<<endl;
    // cout<<s2.gf<<endl;

    Student s3("dola",5,45,1,0); // without gf
    
    cout<<s3.name<<endl;
    cout<<s3.age<<endl;
    cout<<s3.id<<endl;
    cout<<s3.nos<<endl;

    // calling it on heap

    Student *s4 = new Student("bhola",5,45,1,0);
      cout<<s4->name<<endl;  // as the object is in heap and it location is stored at stack so we have to use diff syn here.
    cout<<s4->age<<endl;
    cout<<s4->id<<endl;
    cout<<s4->nos<<endl;
    cout<<(*s4).present<<endl; // another syntax

    delete s4; // no leak


// cout<<sizeof(s1)<<endl;     // compiler tries to give padding in such a way that the size of class becomes the nearest greatest multiple of the largest varible in the class.
//                             // padding is giving extra memory .

// s1.name = "Raj";
// s1.age = 12;
// s1.id = 456;
// s1.nos = 4;
// s1.present = 0;

// s2.name = "ramu";
// s2.age = 15;
// s2.id = 46;
// s2.nos = 11;
// s2.present = 1;

return 0;
}