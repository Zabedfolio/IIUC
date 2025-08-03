/*
Q: Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 - Address
it also has a function named 'printSalary' which prints the salary of the members.
Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee'
and 'Manager' classes have data members 'specialization' and 'department'
respectively. Now, assign name, age, phone number, address and salary to an
employee and a manager by making an object of both of these classes and print the
same.
*/

#include<iostream>
using namespace std;

class Member {
    public:
    string name;
    int age;
    string phoneNumber;
    string address;
    double salary;

    void printSalary() {
        cout << "Salary: " << salary << endl;
    }
};

class Employee : public Member {
    public:
    string specialization;

    void printDetails() {
        cout << "Employee Details: " << endl;
        cout << " Name: " << name << endl;
        cout << " Age: " << age << endl;
        cout << " Phone Number: " << phoneNumber << endl;
        cout << " Address: " << address << endl;
        cout << " Specialization: " << specialization << endl;
        printSalary();
        cout << endl;
    }
};

class Manager : public Member {
    public:
    string department; // ✅ Added this

    void printDetails() {
        cout << "Manager Details: " << endl;
        cout << " Name: " << name << endl;
        cout << " Age: " << age << endl;
        cout << " Phone Number: " << phoneNumber << endl;
        cout << " Address: " << address << endl;
        cout << " Department: " << department << endl;
        printSalary();
        cout << endl;
    }
};

int main() {
    Employee emp;
    emp.name = "Zabed";
    emp.age = 28;
    emp.phoneNumber = "01979333880";
    emp.address = "Chattogram";
    emp.salary = 50000;
    emp.specialization = "Software Engineer";

    Manager mgr;
    mgr.name = "Insirat";
    mgr.age = 45;
    mgr.phoneNumber = "01890234675";
    mgr.address = "Muradpur";
    mgr.salary = 85000;
    mgr.department = "Human Resources";

    emp.printDetails();
    mgr.printDetails();

    return 0;
}