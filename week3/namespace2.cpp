#include <iostream>
using namespace std;

namespace Outer {
    namespace Inner {
        int x = 42;
    }
}
int main() {
    cout << Outer::Inner::x << endl;
    return 0;
}
