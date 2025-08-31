//virtual function
#include<iostream>
using namespace std;
class Base{
    public:
   virtual void print(){
        cout<<"This is a function of base class"<<endl;
  }
};
class Derived:public Base{
    public:
    void print(){
        cout<<"This is a function of derived class"<<endl;
    }
};
int main(){
    Base *b;
    Derived d;
    b=&d;
    b->print();
}