#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st ="Shyam Thakur";
    string st2;
    // opening file using constructor and writing it
    ofstream out("sample1.txt");    // write operation
    out<<st;

     // opening file using constructor and reading it
   /*ifstream in("sample2.txt");    // read operation
    getline(in, st2);
    cout<<st2<<endl;
    in.close();*/

    return 0;
} 