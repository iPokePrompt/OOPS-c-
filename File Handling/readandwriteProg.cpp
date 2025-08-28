#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream sout("sample1.txt");
    cout<<"Enter your Name:";
    string name;
    cin>>name;
    sout<<"My name is "+name;
    sout.close();

    ifstream sin("sample1.txt");
    string line;
    getline(sin,line);
    cout<<line<<endl;
    sin.close();
    return 0 ;
}
