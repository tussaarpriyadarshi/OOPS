#include<iostream>
using namespace std;
class User{
    private:
    int secret=338;//its private
    public:
    string name="default";
    void setSecret(const int & newsecret){ //this is setter ,it sets the data
        secret=newsecret;
    }
    int getSecret(){
        return secret;
    }
    void ClassMessage(){
        cout<<"this is method which is same as fxn"<<" "<<name<<endl;

    };

};
int main(){
    User naam; //making object
    naam.name="tushar";
    naam.ClassMessage();//using object to call the function
    //if the fxn classMessage is static then we do not need object to call it
    naam.setSecret(123);//this is setting then do getting 
    cout<<naam.getSecret()<<endl;
    
    User newname; //new object
    newname.name="kittu";
    newname.ClassMessage();
    return 0;
}