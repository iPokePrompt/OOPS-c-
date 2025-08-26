//  Write a C++ program with a class Student that initializes name and age using a default constructor (set default values).
//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(){
        cout<<"Default Constructor"<<endl;
        name="unknown";
        age=0;
    }
    void display(){
    cout<<"name :"<<name<<endl;
     cout<<"age :"<<age<<endl;
}
};

int main(){
    Student S1;
    S1.display();
return 0;
}