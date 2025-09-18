#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int basicSalary;
    Employee(string s,int salary):name(s),basicSalary(salary){}

};
class RegularEmployee:public Employee{
    public:
    RegularEmployee(string RegEmp_name,int RegEmp_salary ) : Employee(RegEmp_name,RegEmp_salary){}
    int getNetSalary(){
        return basicSalary +(basicSalary *10/100);
    }
    void displayNetSalary() {
    cout << name << " Net Salary = " << getNetSalary() << endl;
}

    

};
class ContractEmployee : public Employee{
    public:
    ContractEmployee(string ConEmp_name,int ConEmp_salary):Employee(ConEmp_name,ConEmp_salary){}
    int getNetSalary(){
        return basicSalary +(basicSalary *5/100);
    }
    void displayNetSalary() {
    cout << name << " Net Salary = " << getNetSalary() << endl;
}

};
int main(){
    RegularEmployee r("Tushar",20000);
    r.displayNetSalary();
    ContractEmployee c("Rahul",30000);
    c.displayNetSalary();
    return 0;
}