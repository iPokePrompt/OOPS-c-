#include<iostream>
#include<string.h>
using namespace std;
class city;
class customer{
    int number,zip;
    public:
    customer(int number,int zip){
        this->number = number;
        this->zip = zip;
    }
    friend void display(customer&,city&);
};
class city{
    public:
  int zip;
  string name,state;
  city(string name,string state,int zip){
      this->name=name;
      this->state=state;
      this->zip=zip;
  }
};
void display(customer&ob1,city&ob2){
    cout<<"number :"<<ob1.number<<"\nzip : "<<ob1.zip<<endl;
    cout<<"\nname : "<<ob2.name<<"\nstate : "<<ob2.state<<"\nzip : "<<ob2.zip<<endl;
}
int main(){
    customer ob1(100,28479);
    city ob2("bina","mp",470113);
    display(ob1,ob2);
    
    return 0;
}