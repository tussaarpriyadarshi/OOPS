#include<iostream>
using namespace std;
class Vehicle{
    public:
   virtual void displaySpeed(){
        cout<<"Vehicle speed unknown"<<endl;
    }

};
class Car:public Vehicle{
    public:
    void displaySpeed() override{
        cout<<"Car speed 120 km/h"<<endl;

    }

};
class Bike:public Vehicle{
    public:
    void displaySpeed() override{
        cout<<"Bike speed 80 km/h"<<endl;
    }

};
int main(){
    Car c;
    c.displaySpeed();
    Bike b;
    b.displaySpeed();
    return 0;
}