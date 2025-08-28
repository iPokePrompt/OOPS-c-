#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample1.txt");
    out<<"hello world\n";
    out<<"hello world\n";
    out<<"hello world\n";
    out<<"hello world\n";
    out.close(); 

    ifstream in;
    in.open("sample1.txt");
    string line;
   // getline(in,line);
    //cout<<line<<endl;
    while(in.eof()==0){
        getline(in,line);
        cout<<line<<endl;
    }
    in.close();





    return 0;
}