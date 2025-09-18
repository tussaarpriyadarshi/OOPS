#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;

};
class Circle:public Shape{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}
    void draw() override{
        cout<<"Drawing circle of radius "<<radius<<endl;
    }

};
class Rectangle:public Shape{
    private:
    double length;
    double breadth;
    public:
    Rectangle(double l,double b):length(l),breadth(b){}
    void draw() override{
        cout<<"Drawing Rectangle of length "<<length<<" and "<<breadth<<endl;
    }

};

int main(){
    Shape *a;
    Circle c(7);
    
    a=&c;
     a->draw();
    
    Rectangle d(5,10);
    a=&d;
   
    a->draw();
    return 0;
}