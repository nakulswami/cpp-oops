#include <iostream>
using namespace std;
namespace Hello{
    void greet() {
        cout << "Hello, World!" << endl;
    }
}
int main() {
    Hello::greet();
    return 0;
}