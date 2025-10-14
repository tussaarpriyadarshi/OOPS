// #include<iostream>
// using namespace std;
// class Singleton{
//     public:
//     Singleton(){
//         cout<<"singleton pattern"<<endl;
//     }
// };
// int main(){
//     Singleton *a=new Singleton();
//     Singleton *b=new Singleton();
//     cout<<(a==b)<<endl;

// } we will get output 0 means false because every object is at different memory
//so we will think to put the constructor under private,but this will restrict us to make an object
//our main goal is to make single object 
//like a getter we make getInstance under public .this method is a pointer which is of type Singleton
#include<iostream>
#include<mutex>


using namespace std;

class Singleton{
    private:
    static Singleton* instance;
    static std::mutex mtx; 
    Singleton(){
        cout<<"creating singleton"<<endl;
    }
    public:
    static Singleton* getInstance(){
        if(instance==nullptr){
            lock_guard<std::mutex> lock(mtx);
            instance=new Singleton();
        }
        
        return instance;

    }
};
Singleton* Singleton::instance=nullptr;
std::mutex Singleton::mtx;
// First Singleton* = "This is a pointer to Singleton type"
// Second Singleton:: = "This belongs to the Singleton class"
/*this is ok,this whole code is ok ..but this is not thread safe
say we have two thread ,both will se ok instance is nullptr let s make our ow
object.so here will have two object address
*/
int main(){
    Singleton *s1=Singleton::getInstance();
    Singleton *s2=Singleton::getInstance();
    cout<<(s1==s2)<<endl;
    
    return 0;
}