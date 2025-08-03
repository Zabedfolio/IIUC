/*
Q: Create a class with a function that prints "This is parent class" and its subclass with
another function that prints "This is child class". Now, create an object for each class
and call
a. Function of the parent class by the object of the parent class
b. Function of the child class by the object of the child class
c. Function of the parent class by the object of the child class
*/

#include<iostream>
#include<string>

using namespace std;

class Parent{
    public:
    void printParent(){
        cout<<"This is parent class"<<endl;
    }
};

class Child:public Parent{//Inheritence
    public:
    void printChild(){
        cout<<"This is child class"<<endl;
    }
};

int main(){
    Parent parentObj;
    Child childObj;

    parentObj.printParent();
    childObj.printChild();
    childObj.printParent();

    return 0;
}
