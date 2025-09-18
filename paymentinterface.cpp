#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void  Pay(double amount)=0;
    virtual ~Payment(){}

};
class CrditCardPayment:public Payment{
    
    public:
    void Pay(double amount) override{
        cout<<"Processing Credit Card Payment of "<<amount<<endl;

    }

};
class PayPalPayment:public Payment{
    public:
    void Pay(double amount) override{
        cout<<"Processign Paypal amount of "<<amount<<endl;

    }

};
int main(){
    
    CrditCardPayment credit;
    PayPalPayment paypal;
    credit.Pay(2500);
    paypal.Pay(1500);
    return 0;
}
