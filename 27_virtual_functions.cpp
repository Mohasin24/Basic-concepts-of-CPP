/*
1. If we use virtual function then we can access the behaviours of derived class by base class pointer but not characteristics
*/

#include <iostream>

using namespace std;

class Base
{
public:
    int var_base;

    virtual void display()
    {
        cout << "Base class display function\n";
        cout << "Base class variable var_base = " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;

    void display() // redefinition
    {
        cout << "Derived class display function\n";
        cout << "Base class variable var_base = " << var_base << endl;
        cout << "Derived class variable var_derived = " << var_derived << endl;
    }
};

int main()
{   
    Base *bp = NULL;

    Derived dobj;

    bp = &dobj;

    bp->display();

    return 0;
}