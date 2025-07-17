#include <iostream>
using namespace std;

int value = 10;

void showScopes() {
    int value = 20;
    cout << "Inside function (function scope): value = " << value << endl;

    {
        int value = 30;
        cout << "Inside block (block scope): value = " << value << endl;
    }

    cout << "Back in function (function scope again): value = " << value << endl;
}

int main() {
    cout << "In main (global scope): value = " << value << endl;

    showScopes();

    cout << "Back in main (global scope again): value = " << value << endl;

    return 0;
}
