#include<iostream>
using namespace std;
template<class T>
class rectangle{
T length, width;
public:
    rectangle():length(0),width(0){}
    void getInfo();
    double clacPerimeter();
    double clacArea();
    void display();
};
template<class T>
void rectangle<T>::getInfo(){
cin>>length>>width;
}
template<class T>
double rectangle<T>::clacPerimeter(){
return 2*(length+width);
}
template<class T>
double rectangle<T>::clacArea(){
return (length*width);
}
template<class T>
void rectangle<T>::display(){
cout<<"length : "<<length<<"width : "<<width<<endl;
}
int main(){
rectangle<int>obj;
cout<<"enter the values of length and width"<<endl;
obj.getInfo();
cout<<"perimeter of rectangle : "<<obj.clacPerimeter()<<endl;
cout<<"area of rectangle :"<<obj.clacArea()<<endl;
return 0;
}

