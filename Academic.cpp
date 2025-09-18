#include<iostream>
using namespace std;
class Staff{
    protected:
    string name;
    double salary;
    public:
    Staff(string n,double s):name(n),salary(s){}
    virtual void display()=0;
};
class TeachingStaff :public Staff{
    string subject;
    public:
    TeachingStaff(string n,double s,string sub):Staff(n,s),subject(sub){}
    void display () override{
        cout<<name<<" ->"<<subject<<" ,"<<salary<<endl;
    }
    

};
class NonTeachinStaff: public Staff{
    string department;
    public:
    NonTeachinStaff(string n,double s,string dep):Staff(n,s),department(dep){}
    void display () override{
        cout<<name<<" ->"<<department<<","<<salary<<endl;
    }

};
int main(){
    TeachingStaff t("Tushar",50000,"Maths");
    NonTeachinStaff nt("Priyadarshi",40000,"Admin");
    t.display();
    nt.display();
    return 0;
}