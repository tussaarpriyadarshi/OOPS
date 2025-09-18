#include <iostream>
#include <string>
using namespace std;
class Man
{
    string _name;
    int _age;
    Man() {}
    friend class Superman;
    friend class Spiderman;

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}

    void run()
    {
        puts("I can run");
    }

public:
    void sayName() const;//declaration
};
//defination of member function
void Man ::sayName() const
{
    cout << "My name is " << _name <<" "<< _age<<endl;
}
//derived class
class Superman : public Man
{
    bool flight;

public:
    Superman(string name) : Man(name, 26) {};
    
    void run(){
        printf("i can run at light speed %d\n",_age);
    }
};
class Spiderman : public Man{
    bool webbing;
    public:
    Spiderman(string name) : Man(name,19){};
    void run(){
        printf("I can run at normal speed %d\n",_age);//this age is inaccessible so make friend func
    }
};
int main()
{
    Superman clark("kent");
    clark.run();
    clark.sayName();

    Spiderman peter("peter");
    peter.run();
    peter.sayName();

    

    return 0;
}