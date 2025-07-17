// Simple Interest Calculator using OOP in C++
#include <iostream>
using namespace std;

class SimpleInterestCalculator {
private:
    float principal;
    float rate;
    float time;

public:
    void inputValues() {
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Enter rate of interest: ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
    }

    float calculateSI() {
        return (principal * rate * time) / 100;
    }

    void displaySI() {
        float si = calculateSI();
        cout << "Simple Interest: " << si << endl;
    }
};

int main() {
    SimpleInterestCalculator calc;
    calc.inputValues();
    calc.displaySI();

    return 0;
}