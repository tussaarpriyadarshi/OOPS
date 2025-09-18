#include<iostream>
#include<iomanip>
using namespace std;
class Shape{
    public:
   virtual  double area() const =0;
   virtual ~Shape()=default;

    

};
class Rectangle : public Shape{
    private:
    double length;
    double breadth;
    public:
    Rectangle(double l,double b):length(l),breadth(b){}
    double area() const override {
        return length * breadth;
    }

};
class Circle : public Shape {
    private:
    double radius;
    static constexpr double PI=3.14;
    public:
    Circle(double r) : radius(r){}
    double area() const override{
        return PI*radius*radius;
    }

};
int main(){
    Rectangle rect(5,10);
    Circle circ(7);
    cout << "Rectangle Area = " << static_cast<int>(rect.area()) << endl;

    
    cout << fixed << setprecision(2);
    cout << "Circle Area = " << circ.area() << endl;
    
    return 0;
}