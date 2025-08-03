/*
Q: Create a class named 'PrintNumber' to print various numbers of different datatypes by
creating different functions with the same name 'printn' having a parameter for each
datatype.
*/

#include<iostream>
using namespace std;

class PrintNumber{
    public:
    void printn(int num){
        cout<<"Integer: "<<num<<endl;
    }

    void printn(float num){
        cout<<"Float: "<<num<<endl;
    }

    void printn(double num){
        cout<<"Double: "<<num<<endl;
    }

    void printn(char ch){
        cout<<"Character: "<<ch<<endl;
    }

    void printn(string str){
        cout<<"String: "<<str<<endl;
    }
};

int main(){
    PrintNumber pn;

    pn.printn(10);
    pn.printn(3.14f);
    pn.printn(2.4873683947484784893);
    pn.printn('A');
    pn.printn("Hello");

    return 0;
}