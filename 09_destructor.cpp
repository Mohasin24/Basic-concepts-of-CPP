/*
1> Destructor does not take any argument and it does not return any value
2> Name of a destructor should be same as the name of the class and there should be '~' (tilda) before the name of destructor
3> Destructor is used to dealloacte the resources allocated by our program
4> Destructor gets called at the end of the program
*/

#include <iostream>

using namespace std;

class Demo
{
public:
    // characteristics
    int x;
    int y;

    // default constructor
    Demo()
    {
        cout << "Inside the default constructor.\n";

        // here we can also take input from the user
        x = 0;
        y = 0;
    }

    // destructor
    ~Demo()
    {
        cout << "Inside the destructor.\n";
    }
};

int main()
{

    Demo obj1;

    return 0;
}
