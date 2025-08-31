//operator Overloading
#include<iostream>
using namespace std;
class Overload{
    private:
    int a ,b;
    public:
    Overload(int num1,int num2){
        int result;
        this->a=num1;
        this->b=num2;
        result=a-b;
        cout<<"result ="<<result<<endl;
    }
      void operator-(){
        a=-a;
        b=-b;
    }
    void show(){
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;
    }
};
int main(){
    Overload o1(2,3);
    -o1;
    o1.show();
    return 0;
}