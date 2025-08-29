//  Write a program with a class Counter having a private count. Declare a friend function incrementCount() that increments count by 1.
//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
class Counter{
    private:
    int count;
    public:
    friend void incrementCount(Counter &c);
    void display(){
        cout<<"Count :"<<count<<endl;
    }
};
void incrementCount(Counter &c){
    c.count++;
}
int main(){
    Counter c1;
    c1.display();
    incrementCount(c1);
    c1.display();
    return 0;
}