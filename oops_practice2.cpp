#include<iostream>
using namespace std;

class Rectangle{
    int _length;
    int _breadth;
    public:
    //constructor
     Rectangle(double l=2.0 ,double b=2.0){
            _length=l;
            _breadth=b;
    }
    //method
    double Area(){
        return _length * _breadth ;
    }
    int compare(Rectangle rectangle){
        return  this->Area() >rectangle.Area();
    }


};
int main(){
    Rectangle h1(3.0,3.0);
    Rectangle h2(4.0,4.0);
    if(h1.compare(h2)){
        cout<<"H2 is smaller";
    }else{
        cout<<"h2 is bigger";
    }
    
    return 0;
}