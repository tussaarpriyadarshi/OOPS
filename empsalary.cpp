#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int salary;

public:
    virtual void displaySalary() = 0;
    Employee(string name_, int salary_) : name(name_), salary(salary_) {}
};

class Manager : public Employee {
    int bonus;

public:
    Manager(string name_, int salary_) : Employee(name_, salary_), bonus(20) {}
    void displaySalary() override {
        int totalSalary = salary + (bonus * salary) / 100;
        cout << name << " Total Salary = " << totalSalary << endl;
    }
};

class Developer : public Employee {
    int bonus;

public:
    Developer(string name_, int salary_) : Employee(name_, salary_), bonus(10) {}
    void displaySalary() override {
        int totalSalary = salary + (bonus * salary) / 100;
        cout << name << " Total Salary = " << totalSalary << endl;
    }
};

int main() {
    Employee* e;

    Manager m("Anita", 50000);
    e = &m;
    e->displaySalary();

    Developer d("Rohit", 40000);
    e = &d;
    e->displaySalary();

    return 0;
}
