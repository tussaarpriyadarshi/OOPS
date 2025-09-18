#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void makeSound(){

    }
};
class Dog : public Animal{
      void makeSound() override{
        cout<<"Bark"<<endl;
      }
};
class Cat: public Animal{
    void makeSound() override{
        cout<<"meow"<<endl;
    }

};
int main(){
    Animal* a;
    Dog d;
    Cat c;
    a=&d;
    a->makeSound();
    a=&c;
    a->makeSound();

    
    return 0;
}