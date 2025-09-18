#include<iostream>
#include <string>
using namespace std;
class Phone{
    string _name;
    string _os;
    int _price;
    Phone(); //default constructor declaration
    public:
    
    Phone(const string & name,const string & os,const int & price); //parameter consturctor
    Phone(const Phone &); //copy constructor
     string getName(){ //getter
        return _os;
    }
    
    // ~Phone();//destructor
};
//defining constructor outside class
//name,os,price known as member initializer list
//initialize them empty strings and 0 for int instead of some garbage values
Phone::Phone() : _name(),_os("windows"),_price(){
    puts("Default Constructor");

}
//declaring parameterized constructor
Phone::Phone(const string & name,const string & os,const int & price) : _name(name),
       _os(os),_price(price){
        puts("this is parameter constructor");
       }
Phone :: Phone(const Phone & values){
    puts("overwrite copy constructor");
    _name=values._name;
    _os="skinned"+values._os;
    _price=values._price;

}

int main(){
    // Phone samsung;
    // cout<<samsung.getName()<<endl;

    Phone oneplus("oneplus9","android-",799);

    Phone apple=oneplus;
    cout<<"apple has "<<" "<<apple.getName()<<endl;
    
    return 0;
}