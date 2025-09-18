#include<iostream>
using namespace std;
int main(){
    int reversed_number=0;
    int num;
    cout<<"please insert a number";
    cin>>num;
    while(num!=0){
        int remainder=num%10;
        reversed_number=reversed_number*10+remainder;
        num=num/10;
    }
    cout<<reversed_number;
}