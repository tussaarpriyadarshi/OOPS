#include<iostream>
using namespace std;
//interface 1:landvehicle
class LandVehicle{
    public:
    virtual void driveonLand()=0;
    virtual ~LandVehicle(){}
};
//interface2
class WaterVehicle{
    public:
    virtual void driveOnWater()=0;
    virtual ~WaterVehicle(){}
};
//amphibiousVehicle implements both interfaces
class AmphibiousVehicle:public LandVehicle,public WaterVehicle{
    string name;
    public:
    AmphibiousVehicle(string n):name(n){}
    void driveonLand() override{
        cout<<name<<" -> Driving on Land"<<endl;
    }
    void driveOnWater() override{
        cout<<name<<"-> Driving on Water"<<endl;
    }

};
int main(){
    AmphibiousVehicle av("HydroCar");
    av.driveonLand();
    av.driveOnWater();
    return 0;
}