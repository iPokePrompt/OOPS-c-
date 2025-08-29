//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
class Box{
  private:
  float length, width, height;
  public:
  Box(float l, float w, float h){
     this->length =l;
     this->width =w;
     this->height =h;
  }
  friend void printBox(Box b);
};
void printBox(Box b){
    cout<<"length :"<<b.length<<endl;
     cout<<"width :"<<b.width<<endl;
      cout<<"height :"<<b.height<<endl;
}
int main(){
    
    Box obj1(5.0,8.0,9.7);
    
    printBox(obj1);
return 0;
}