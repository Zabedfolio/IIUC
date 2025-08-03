/*
Q: Create a class named 'Rectangle' with two data members- length and breadth and a
function to calculate the area which is 'length*breadth'. The class has three constructors
which are:
1 - having no parameter - values of both length and breadth are assigned zero.
2 - Having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - Having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and
print their areas.
*/


#include<iostream>
using namespace std;

class Rectangle{
    private:
    double length;
    double breadth;

    public:
    Rectangle(){
        length=0;
        breadth=0;
    }

    Rectangle(double l,double b){
        length =l;
        breadth=b;
    }

    Rectangle(double side){
        length=side;
        breadth=side;
        }

        double area(){
            return length*breadth;
    }
};

int main(){
    Rectangle r1;
    cout<<"Area0: "<<r1.area()<<endl;

    Rectangle r2(10,5);
    cout<<"Area2: "<<r2.area()<<endl;

    Rectangle r3(7);
    cout<<"Area1: "<<r3.area()<<endl;

    return 0;
}