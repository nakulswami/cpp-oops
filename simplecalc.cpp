// Simple Calculator using oops in c++
#include <iostream>
using namespace std;
class Calculator {
public:
    // Function to add two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Function to subtract two numbers
    int subtract(int a, int b) {
        return a - b;
    }

    // Function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }

    // Function to divide two numbers
    double divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 or handle error as needed
        }
        return static_cast<double>(a) / b;
    }
};

int main() {
    Calculator calc;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << calc.add(a, b) << endl;
    cout << "Subtraction: " << calc.subtract(a, b) << endl;
    cout << "Multiplication: " << calc.multiply(a, b) << endl;
    cout << "Division: " << calc.divide(a, b) << endl;

    return 0;
}