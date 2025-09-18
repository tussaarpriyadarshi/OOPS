#include<iostream>
using namespace std;
// polymorphism

class One{
    public:
     virtual void intro(){
       cout<<"i am one\n";
    }

};
class Two: public One{
    public:
    void intro(){
       cout<<"i am two\n";
    }

};
class Three:public One{
    public:
    void intro(){
       cout<<"i am three\n";
    }

};
int main(){
    // One a;
    // Two b;
    // Three c;
    // a.intro();
    // b.intro();
    // c.intro();
    //this is fine but lets say we make pointer a
    One *a;
    Two b;
    Three c;
    a=&b;
    a->intro();
    
    a=&c;
    a->intro();
    //we will be thinking a is pointer 
    // a is pointing to b
    //show a->intro will give b 's intro
    //but no we will get i am one for both
    //so to deal with we need to 
    //use virtual keyword 
    


    
    return 0;
}