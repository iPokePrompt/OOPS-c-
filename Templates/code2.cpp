#include <iostream>
#include <string>
using namespace std;
template<class T,class T1>
class Movie {
private:
    T1 year;
    T title,director;
public:
    void setTitle();
    void setYear();
    void setDirector();
    void displayInfo();
};
template<class T,class T1>
void Movie<T,T1>::setTitle(){
cin>>title;
}
template<class T,class T1>
void Movie<T,T1>::setYear(){
cin>>year;
}
template<class T,class T1>
void Movie<T,T1>::setDirector(){
cin>>director;
}
template<class T,class T1>
void Movie<T,T1>::displayInfo(){
cout<<"Title :"<<title<<endl<<"Director :"<<director<<endl;
cout<<"year :"<<year<<endl;
}

int main() {
    Movie<string,int>obj;
    cout<<"Enter the title and director name"<<endl;
    obj.setTitle();
    obj.setDirector();
    cout<<"Enter the year"<<endl;
    obj.setYear();
    obj.displayInfo();
//    obj1.dispalyInfo();
    return 0;
}


