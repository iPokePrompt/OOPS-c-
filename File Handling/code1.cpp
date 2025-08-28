#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter your name and age: ";
    cin.getline(arr,100);
    ofstream myfile("xyz.txt",ios::app|ios::out);
    if(myfile.is_open()){
         myfile<<arr;
        myfile.close();
    }
        cout<<"Data written to file successfully."<<endl;
        cout<<"Reading from file operation started."<<endl;
        char arr1[100];
        ifstream obj("xyz.txt");
        obj.getline(arr1,100);
        cout<<"array content:"<<arr1<<endl;
        obj.close();
        cout<<"Reading successful."<<endl;
}