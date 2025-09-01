#include<iostream>
using namespace std;
template<class T>
class vector{
    public:
     T *arr;
    int size;
    vector(int m){
        size=m;
        arr=new T[size];
    }
     T  dotProduct(vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=arr[i]*v.arr[i];
        }
        return d;
    }

};
int main(){
    vector<float>v1(3); 
    v1.arr[0]=1.0;
    v1.arr[1]=5.0;
    v1.arr[2]=7.0;
    
    vector<float>v2(3); 
    v2.arr[0]=2.0;
    v2.arr[1]=6.8;
    v2.arr[2]=8.7;

    v1.dotProduct(v2);
    cout<<v1.dotProduct(v2)<<endl;

    return 0;
}
