/*
Q: Write a program to print the names of students by creating a Student class. If no name
is passed while creating an object of the Student class, then the name should be
"Unknown", otherwise the name should be equal to the String value passed while
creating the object of the Student class.
*/

#include<iostream>
using namespace std;

class Student{
    private:
    string name;

    public:
    Student(string n="Unknown"){
        name=n;
    }

    void printName(){
        cout<<"Student Name: "<<name<<endl;
    }
};

int main(){
    Student s1("Zabed");
    s1.printName();

    Student s2;
    s2.printName();

    return 0;
}