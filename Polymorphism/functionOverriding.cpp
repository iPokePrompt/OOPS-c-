// function overriding 
#include<iostream>
using namespace std;
class Base{
    public:
   void print(){
        cout<<"This is a function of base class"<<endl;
  }
};
class Derived:public Base{
    public:
    void print(){
        cout<<"This is a function od derived class"<<endl;
    }
};
int main(){
    Derived o1;
    o1.print();
}