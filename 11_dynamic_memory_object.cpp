// We can also allocate & deallocate the dynamic memory for object of a class

#include<iostream>

using namespace std;

class Demo
{
    public :

    // characteristics 
    int x;
    int y;

    // Behaviours
    Demo()
    {
        cout<<"Inside default constructor.\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor.\n";
    }

    void func()
    {
        cout<<"Inside the function.\n";
    }
};

int main()
{

    // Demo obj;

    Demo *Ptr = NULL;

    // Ptr = new Demo[3];  Dynamic array of object creation
    // Ptr[1].func();

    Ptr = new Demo; // Dynamic object creation

    Ptr->func(); // Indirect accessing

    delete Ptr;  // resource de-allocation

    return 0;
}