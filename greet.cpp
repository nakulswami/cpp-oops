#include <iostream>
using namespace std;
class A {
public:
void greet() {cout << "Hello from class A!" << endl;}
};

class B: public A {};
class C: public B {};

int main() {
    C objC;
    objC.greet(); 
    return 0;
}