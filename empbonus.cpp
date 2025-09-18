#include <iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int salary;
    public:
    virtual void calculateBonus()=0;
    Employee(string n,int s):name(n),salary(s){}
};
class Manager:public Employee{
    int bonus;
    public:
    Manager(string name_,int salary_,int bonus_):Employee(name_,salary_),bonus(bonus_){}
    void calculateBonus() override{
    cout<<name<<" "<<"Bonus"<<"="<<(salary*bonus)/100<<endl;

   }

};
class Developer:public Employee{
    
    int bonus;
    public:
    Developer(string name_,int salary_,int bonus_):Employee(name_,salary_),bonus(bonus_){}
    void calculateBonus() override{
        cout<<name<<" "<<"Bonus"<<"="<<(salary*bonus)/100<<endl;
    }

};
int main(){
    Employee *a;
    Manager m("Anita",50000,20);
    Developer d("Rahul",40000,10);
    a=&m;
    a->calculateBonus();
    a=&d;
    a->calculateBonus();

    return 0;
}