#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int salary;
    Employee(string n,int s):name(n),salary(s){}
    virtual void displaySalary()=0;


};
class TeachingStaff:public Employee{
    protected:
    string subject;
    public:
    TeachingStaff(string n,int s,string sub):Employee(n,s),subject(sub){}
    void displaySalary() override{
        cout<<name<<" -> Subject=" <<subject<<", Salary="<<salary<<endl;

        

    }
   
    


};
class Professor:public TeachingStaff{
    string specialization;
    public:
    Professor(string n,int s,string sub,string spec):TeachingStaff(n,s,sub),specialization(spec){}
    void displaySalary() override{
        cout<<name<<" -> Subject="<<subject <<", Specialization ="<<specialization<<", Salary="<<salary<<endl;

    }

};
class Lecturer:public TeachingStaff{
    string department;
    public:
    Lecturer(string n,int s,string sub,string dept):TeachingStaff(n,s,sub),department(dept){}
    void displaySalary() override{
        cout<<name<<"->"<<subject<<"="<<department<<"="<<salary<<"="<<endl;


    }

};

int main(){
   // Professor p("Dr. Sharma"<<"Math"<<"Algebra"<<8000);
    return 0;
}