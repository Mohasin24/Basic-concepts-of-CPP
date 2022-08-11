//## PURE VIRTUAL FUNCTION
/*
1. Pure virtual function is such a function which is declared by the class without function body.

2. If a class contains at least single pure virtual function then that class is considered as an abstract class. We can not create the object of that class because due to a pure virtual function 'VTABLE' of that object is incomplete.

3. When any of the class inherits that abstract class then it is the responsibilty of a derived class to provide the definition of that pure virtual function.

4. When the class provides the definition  of pure virtual function then that function is consodered as concrete function.
*/

#include <iostream>

using namespace std;

class Base
{
public:
    int x, y;

    void fun() // non virtual concrete function
    {
        cout << "Base fun\n";
    }

    virtual void gun() // virtual concrete function
    {
        cout << "Base gun\n";
    }

    virtual void run() = 0; // abstract function
};

class Derived : public Base
{
public:
    int i, j;

    void fun() // redefinition (concrete non virtual)
    {
        cout << "Derived fun\n";
    }

    virtual void gun() // overriding
    {
        cout << "Derived gun\n";
    }

    void run() // abstract to concrete function
    {
        cout << "Derived run\n";
    }
};
int main()
{

    // Base bobj; // not allowed

    Base *bp = NULL;

    Derived dobj;

    bp = &dobj;

    bp->fun();
    bp->gun();
    bp->run();

    return 0;
}