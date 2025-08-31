// function overloading
#include<iostream>
using namespace std;
class Mother{
    public:
    void show(int name,int age){
        
        cout<<name*age<<endl;
    }
    void show(int name,int age,int height){
      
        cout<<name+age+height<<endl;
    }
};
int main(){
    Mother M;
    M.show(2,3);
    M.show(2,30,4);
}
