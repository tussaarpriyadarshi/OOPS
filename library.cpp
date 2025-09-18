#include<iostream>
using namespace std;
class Book{
    private:
    int copiesAvailable=0;
    public:
    void addCopies(int n){
        copiesAvailable+=n;
    }
    void removeCopies(int n){
        copiesAvailable-=n;
    }
    int getCopiesAvailable(){
        return copiesAvailable;
    }
};
int main(){
    Book test;
    test.addCopies(3);
    test.removeCopies(1);
    cout<<"copies available ="<<test.getCopiesAvailable();
    return 0;
}