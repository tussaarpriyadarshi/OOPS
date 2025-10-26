#include<iostream>
using namespace std;
//interface
class CourseStructure{
    public:
   virtual void showCourseSubjects()=0;
   virtual ~CourseStructure(){}
  
};
class Student{
    protected:
    int id;
    string name;
    int age;
    string course;
    int baseFee;
    public:
    void setters(int i){
        int id=i;
    }
    Student(int _id,string _name,int _age,string _course,int _baseFee):id(_id),name(_name),age(_age),course(_course),baseFee(_baseFee){};
   virtual void calculateTotalFee(){
    cout<<"totalFee"<<baseFee<<endl;
   }
   virtual ~Student(){}
   //getters
   int getId(){
    return id;
   }
   string getName(){
    return name;
   }
   int getAge(){
    return age;

   }
   int getBaseFee(){
    return baseFee;
   }
   //setters
   void setId(int i){
    id=i;
   }
   void setName(string n){
    name=n;
   }
   void setAge(int a){
    age=a;
   }
   void setCourse(string c){
    course=c;
   }
   void setBaseFee(int f){
    baseFee=f;
   }
   void displayDetails(){
    cout<<"id"<<id<<endl;
    cout<<"Name"<<name<<endl;
    cout<<"age"<<age<<endl;
    cout<<"course"<<course<<endl;
    cout<<"base fee"<<baseFee<<endl;
   }
   virtual void calculateTotalFee(){
    cout<<"Total Fee "<<baseFee<<endl;
   }

};
class DayScholar:public Student{
    private:
    int transportFee;
    public:
    DayScholar(int _id,string _name,int _age,string _course,int _baseFee):Student(_id,_name,_age,_course,_baseFee){}
    void calculateTotalFee() override{
        cout<<"total fee = "<<baseFee + transportFee<<endl;

    }
    

};
class Hosteller:public Student{
    private:
    int hostelFee;
    public:
    Hosteller(int _id,string _name,int _age,string _course,int _baseFee):Student(_id,_name,_age,_course,_baseFee){}
    void calculateTotalFee() override{
        cout<<"total fee (Hostelller ):"<<baseFee+hostelFee<<endl;


    }

};

int main(){
    return 0;
}