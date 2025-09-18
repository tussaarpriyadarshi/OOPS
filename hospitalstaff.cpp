#include<iostream>
using namespace std;
class staff{
    protected:
    string name;
    int staffid;
    public:
    staff(string name,int staffid):name(name),staffid(staffid){}
    virtual void displayDetails() =0;

};
class Doctor:public staff{
    string specialization;
    public:

    Doctor(string name,int staffid,string spec):staff(name,staffid),specialization(spec){}
    void displayDetails() override{
        cout<<"Doctor -> "<<name<<"->"<<staffid<<"= ,"<<"specialization ="<<specialization<<endl;

    }


};
class Nurse:public staff{
    string shift;
    public:
    Nurse(string name,int staffid,string shift_):staff(name,staffid),shift(shift_){}
    void displayDetails() override{
        cout<<name<<"-> "<<staffid<<"="<<","<<shift<<"="<<endl;

    }

};
int main(){
    staff *s;
    Doctor d("Dr.Reddy",101,"cardiology");
    s=&d;
    s->displayDetails();
    return 0;
}