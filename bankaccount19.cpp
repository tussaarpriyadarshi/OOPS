#include <iostream>
using namespace std;
class BankAccount{
    protected:
    int accountNumber;
    string accountHolder;
    int balance;
    public:
    BankAccount(int ac_no,string ac_holder,int bal):accountNumber(ac_no),accountHolder(ac_holder),balance(bal){}
    void displayBalance(){
        cout<<accountHolder<<" -> Balance=" <<balance;
        
    }
};
class SavingsAccount:public BankAccount{
    int interesRate;
    public:
    SavingsAccount(int ac_nmbr,string acc_holder,int balance,int ir_):BankAccount(ac_nmbr,acc_holder,balance),interesRate(ir_){}
    int calculateInterest(){
        return (balance*interesRate)/100;
    }
    void display(){
        displayBalance();
        cout<<", Interest"<<calculateInterest()<<endl;
    }


};
class CurrentAccount:public BankAccount{
    int overdraftLimit;
    public:
    CurrentAccount(int ac_nmbr,string acc_holder,int balance,int over_limit):BankAccount(ac_nmbr,acc_holder,balance),overdraftLimit(over_limit){}
    void checkOverdraft(){
        cout<<"Overdraft Limit = "<<overdraftLimit<<endl;


    }
    void display(){
        displayBalance();
        checkOverdraft();
    }

};
int main(){
    SavingsAccount s(101,"Ramesh",5000,5);
    CurrentAccount c(102,"Anita",2000,1000);
    s.display();
    c.display();
    return 0;
}