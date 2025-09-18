#include<iostream>
using namespace std;
class Account{
    protected:
    int accountNo;
    double balance;
    public:
    Account(int s,double b):accountNo(s),balance(b){}
    virtual void display()=0;
};
class SavingAccount:public Account{
    int interestRate;
    public:
    SavingAccount(int ac_no,double bal,int ir):Account(ac_no,bal),interestRate(ir){}
    void display() override{
        cout<<"Saving ->"<<accountNo<<","<<"balance->"<<balance << ", Interest=" << interestRate << "%" << endl;
    }
};
class CurrentAccount:public Account{
    int overdraftLimit;
    public:
    CurrentAccount(int ac_no,double bal,int over_draft):Account(ac_no,bal),overdraftLimit(over_draft){}
    void display() override{
        cout<<"Current ->"<<accountNo<<","<<"balance->"<<balance<< ", Overdraft=" << overdraftLimit << endl;

    }
    
};
int main(){
    SavingAccount s(101,5000,5);
    CurrentAccount t(102,1000,2000);
    Account* accounts[2];
    accounts[0] = &s;
    accounts[1] = &t;
    for (int i = 0; i < 2; i++) {
        accounts[i]->display();
    }
    //this is to run time polymorphism
    //here,we are implementing same method on differnt object
    //we get output depending upon the object type

    return 0;
}