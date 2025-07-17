// Check whether the number is odd or even, positive or negative, single-digit or double-digit using OOP in C++
#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void inputNumber() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    void checkEvenOdd() {
        if (num % 2 == 0)
            cout << num << " is even." << endl;
        else
            cout << num << " is odd." << endl;
    }

    void checkPositiveNegative() {
        if (num > 0)
            cout << num << " is positive." << endl;
        else if (num < 0)
            cout << num << " is negative." << endl;
        else
            cout << "The number is zero." << endl;
    }

    void checkSingleDoubleDigit() {
        if (num >= 0 && num < 10)
            cout << num << " is a single-digit number." << endl;
        else if (num >= 10 && num < 100)
            cout << num << " is a double-digit number." << endl;
        else
            cout << num << " is not a single or double-digit number." << endl;
    }
};

int main() {
    Number n;
    n.inputNumber();
    n.checkEvenOdd();
    n.checkPositiveNegative();
    n.checkSingleDoubleDigit();

    return 0;
}