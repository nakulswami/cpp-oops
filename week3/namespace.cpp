#include <iostream>
using namespace std;
namespace MyMath{
    int add(int a, int b) {
        return a + b;
    }
}
int result;
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    result = MyMath::add(x, y);
    cout << "The sum is: " << result << endl;

}