/*
1. Constant behaviour of a class is such a behaviour which cannot modify the characteristics of a class.
2. If the method is defined as a constant then inside that method we can't update any value of the class characteristics
3. Normal object can call any type of function i.e. non-constant as well as constant
4. Constant object can call only constant member function
*/

#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int k;
    const int j; // Constant characterist

    Demo(int a, int b) : j(b)
    {
        i = a;
        k = 101;
    }

    void fun()
    {
        cout << "Inside fun\n";
        i++; // Allowed
        // j++;     //Not allowed
    }

    // b is a constant input argument
    void gun(int a, const int b) const // constant function / behaviour
    {
        int x = 10;
        const int y = 20; // Constant local variable

        cout << "Inside gun\n";
        // i++;        // Not allowed
        /// j++;     // Not allowed

        // k++; // Not allowed

        x++; // allowed
        // y++; // Not allowed

        a++; // Allowed
        // b++;        // not allowed
    }
};

int main()
{
    Demo obj1(11, 21);
    const Demo obj2(11, 21); // const object

    obj1.fun();
    obj1.gun(10, 20);

    // obj2.fun(); // not allowed
    obj2.gun(10, 20);

    return 0;
}