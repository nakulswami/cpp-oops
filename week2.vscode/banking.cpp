#include <iostream>
using namespace std;

double amount;

void DepositMoney(double &amount) {
    double a;
    cout << "Enter amount to deposit: ";
    cin >> a;
    amount = amount + a;
}

void WithdrawMoney(double &amount) {
    double b;
    cout << "Enter amount to withdraw: ";
    cin >> b;
    amount = amount - b;
}

void DisplayBalance(double amount) {
    cout << "Total bank balance is: " << amount << endl;
}

int main() {
    cout << "Initial Bank Balance: ";
    cin >> amount;

    DepositMoney(amount);
    WithdrawMoney(amount);
    DisplayBalance(amount);

    return 0;
}
