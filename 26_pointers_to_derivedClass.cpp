/*

### Upcasting :-
1.If base class pointer points to derived class object then it is considered as upcasting
2. In upcasting with the pointer of base class we cannot access the members of derived class

### Downcasting :-
1. If a derived class pointer points to the base class object then it is considered as downcasting
2. Downcasting is not directly allowed by the compiler

### Redefinition :-
1. If a base class contains one method & if a derived class contains same name method with same or different prototype then it is consodered as redefinition from the perspective of derived class.
*/

#include <iostream>

using namespace std;

class Base
{
public:
    int var_base;

    void display()
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
    //#### Upcasting
    // Base *bp = NULL;

    // Derived dobj;

    // bp = &dobj;

    // bp->var_base = 51;
    // bp->display();

    // bp->var_derived = 11; // not allowed

    Base *bp = new Derived();

    bp->var_base = 11; // allowed
    // bp->display();     // allowed

    // bp->var_derived = 11; // not allowed

    delete bp;

    /////////////////////////////////////////////////////////////////////

    //## Downcasting

    Derived *dp = NULL;

    Base bobj;

    // dp = &bobj;  // not allowed

    //////////////////////////////////////////////////////////////////

    // Derived class pointer pointing to derived class object

    Derived dobj1;

    Derived *dp1 = &dobj1;

    dp1->var_derived = 101; // allowed
    dp1->var_base = 151;    // allowed

    dp1->display(); // it will first search for display() method inside Derived class if that method is not present inside Derived class then it will go to the Base class and will call the method

    return 0;
}