// make a parent and child class and run a constructor in the parent class and a constructor in the child class
#include <iostream>
using namespace std;
class Parent{
public:
    Parent()
    {cout << "Parent class constructor called." << endl;}
    void display()
    {cout << "This is the Parent class." << endl;}
};
class Child : public Parent{
public:
    Child()
    {cout << "Child class constructor called." << endl;}
    void display()
    {cout << "This is the Child class." << endl;}
};
int main(){
    Child childObj;
    childObj.display();

    return 0;
}