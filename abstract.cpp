#include <iostream>
using namespace std;

// abstract class
class Employee {
protected:
    string name;
    int id;
public:
    Employee(string name_) : name(name_) {}
    virtual void calculateSalary() = 0;  // pure virtual
    virtual ~Employee() {}
};

// interface
class BonusEligible {
public:
    virtual void calculateBonus() = 0;
    virtual ~BonusEligible() {}
};

class PermanentEmployee : public Employee, public BonusEligible {
    int basicSalary;
    int hra;
    int bonus;
public:
    PermanentEmployee(string n, int bs, int hr) 
        : Employee(n), basicSalary(bs), hra(hr), bonus(5500) {}

    void calculateSalary() override {
        cout << name << " Salary = " << (basicSalary + hra);
    }

    void calculateBonus() override {
        cout << ", Bonus = " << bonus << endl;
    }
};

class ContractEmployee : public Employee {
    int hourlyRate;
    int hoursWorked;
public:
    ContractEmployee(string n, int hr, int hwork) 
        : Employee(n), hourlyRate(hr), hoursWorked(hwork) {}

    void calculateSalary() override {
        cout << name << " Salary = " << (hourlyRate * hoursWorked) << endl;
    }
};

int main() {
    Employee* e;

    PermanentEmployee p("Amit", 50000, 5000);
    ContractEmployee c("Neha", 300, 100);

    // Amit (PermanentEmployee) -> salary + bonus
    e = &p;
    e->calculateSalary();
    static_cast<BonusEligible*>(&p)->calculateBonus();

    // Neha (ContractEmployee) -> salary only
    e = &c;
    e->calculateSalary();

    return 0;
}
