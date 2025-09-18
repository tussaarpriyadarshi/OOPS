#include <iostream>
using namespace std;
class Temperature{
    private:
    int temperature;
    public:
    void setTemperature(int t){
        if(t>=0 && t<=100){
            temperature+=t;
        }
        else{
            cout<<"Temperature is out of range"<<endl;
        }
    }
    int getTemperature(){
        return temperature;
    }
};
int main(){
    Temperature temp;
    temp.setTemperature(-5);
    
    return 0;
}