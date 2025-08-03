/*
Q: Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two
functions to print the area and perimeter of the rectangle respectively. Its constructor
having parameters for length and breadth is used to initialize the length and breadth of
the rectangle. Let class 'Square' inherit the 'Rectangle' class with its constructor
having a parameter for its side (suppose s) calling the constructor of its parent class.
Print the area and perimeter of a rectangle and a square
*/

#include<iostream>
using namespace std;

class Rectangle{
    protected:
    double length;
    double breadth;

    public:
    Rectangle(double l,double b){
        length=l;
        breadth=b;
    }

    void printArea(){
        cout<<"Area: "<<length*breadth<<endl;
    }

    void printPerimeter(){
        cout<<"Perimeter: "<<2*(length+breadth)<<endl;
    }
};

class Square: public Rectangle{
    public:
    Square(double s):Rectangle(s,s){}
};

int main(){
    Rectangle rect(10,5);
    cout<<"Rectangle: "<<endl;
    rect.printArea();
    rect.printPerimeter();
    cout<<endl;

    Square sq(7);
    cout<<"Square: "<<endl;
    sq.printArea();
    sq.printPerimeter();

    return 0;
}