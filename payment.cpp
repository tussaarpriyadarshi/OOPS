#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void pay()=0;

};
class CreditCardPayment:public Payment{
    long long cardNumber;
    int amount;
    public:
    CreditCardPayment(long long cardN,int a):cardNumber(cardN),amount(a){}
    void pay() override{
        cout<<"Payment via Credit Card"<<cardNumber<<"->"<<amount<<endl;

    }


};
class UPIPayment:public Payment{
    string upiid;
    int amount;
    public:
    UPIPayment(string upi_id,int a):upiid(upi_id),amount(a){}
    void pay() override{
        cout<<"Payment via UPI "<<upiid<<"->"<<"Rs."<<amount<<endl;
    }

};
int main() {
    Payment *a;

    CreditCardPayment c(1234567890123456LL, 5000);
    UPIPayment u("tushar@upi", 40000);

    a = &c;
    a->pay();   // CreditCardPayment::pay()

    a = &u;
    a->pay();   // UPIPayment::pay()

    return 0;
}
