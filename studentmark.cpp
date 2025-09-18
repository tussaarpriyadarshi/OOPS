#include<iostream>
using namespace std;
class Student{
    private:
    int marks=0;
    public:
    void settermarks(int marks){
        if(marks>=0 && marks<=100){
            this->marks=marks;
        }else{
            cout<<"invalid marks"<<endl;
        }

    }
    int gettermarks(){
         return this->marks;

    }

};

int main(){
    Student s;
   s.settermarks(85);
   cout<<"marks := "<<s.gettermarks()<<endl;
   s.settermarks(900);
   cout<<"marks : = "<<s.gettermarks();
    
    
    return 0;
}