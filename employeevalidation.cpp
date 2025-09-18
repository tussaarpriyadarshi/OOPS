#include<iostream>
using namespace std;
class Employee{
    private:
    int age=0;
    public:
    void setAge(int age){
        if(age>=18){
            this->age=age;
        }
        else{
            cout<<"Invalid age"<<endl;
        }

    }
    int getAge(){
        return this->age;
    }
};
int main(){
    Employee emp;
    emp.setAge(17);
    cout<<"age entered is : "<<emp.getAge();
    return 0;
}