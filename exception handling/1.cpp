#include<iostream>
using namespace std;
 int main (){
    int num,den,result;
    cout<<"enter numerator and denominator";
    cin>>num>>den;
    try {
    if(den==0){
        throw den;
    }
     result =num/den;
    }
    catch(int e) {
        cout<<"division by zero error"<<endl;
    }
    cout<<"result is "<<result<<endl;
    return 0;
 }