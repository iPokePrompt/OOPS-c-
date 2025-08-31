#include<iostream>
using namespace std;
class MyBase{
    public:
    void show(){
        cout<<"Base class show function cclled"<<endl;
    }
    virtual void print(){
        cout<<"Base class print function called"<<endl;
    }
};
class MyDerived: public MyBase{
    public:
    void show(){
        cout<<"Derived class show function cclled"<<endl;
    }
    void print(){
        cout<<"Derived class print function called"<<endl;
    }
};
int main(){
    MyBase *ptr;
    MyDerived obj;
    ptr =&obj;
    ptr->show();
    ptr->print();
}