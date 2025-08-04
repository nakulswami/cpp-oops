#include <iostream>
using namespace std;
// namespace Physics
// {
//     double gravity()
//     {
//         return 9.81;
//     }
// }
// int main()
// {
//     double g = Physics::gravity();
//     cout << "Gravity is: " << g << " m/s^2" << endl;
//     return 0;
// }











// namespace A
// {
//     int val()
//     {
//         return 2;
//     }
// }
// namespace B
// {
//     int val()
//     {
//         return 5;
//     }
// }
// int main()
// {
//     std::cout << A::val() + B::val() << std::endl;
// }












namespace Lib1
{
    void calculate()
    {
        std::cout << "Calculating in Lib1" << std::endl;
    }
}
namespace Lib2
{
    void calculate()
    {
        std::cout << "Calculating in Lib2" << std::endl;
    }
}
int main()
{
    Lib1::calculate();
    Lib2::calculate();
    return 0;
}