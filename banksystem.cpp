#include<iostream>
// exampel of encapsulation
using namespace std;
class BankAccount{
    private:
    double balance=0;
    public:
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"deposited "<<amount<<endl;
        }else{
            cout<<"invalid amount";
        }

    }
    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"withdrawn amount "<<amount<<endl;
        }else{
            cout<<"invalid withdraw amount"<<endl;
        }

    }
    double getBalance(){
        return balance;

    }
    
};
int main(){
    BankAccount acc;
    acc.deposit(5000);
    acc.withdraw(5000);
    //acc.getBalance();
    cout<<"remaining balance "<<acc.getBalance()<<endl;

    
    return 0;
}