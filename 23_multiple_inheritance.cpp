/*
1> Multiple inheritance means one class is inherites more than one class
2> That is Derived class inherites more than one base class
3> In this after object creation constructor gets called as per the inheritance sequence of base class by the derived class 
*/

#include <iostream>

using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Inside Base1 constructor\n\n";
    }
    ~Base1()
    {
        cout << "Inside Base1 destructor\n\n";
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Inside Base2 constructor\n\n";
    }
    ~Base2()
    {
        cout << "Inside Base2 destructor\n\n";
    }
};

// constructor calling sequence changes as per  the inheritance sequence
//  class Derived : public Base2, Base1
class Derived : public Base1, Base2
{
public:
    Derived()
    {
        cout << "Inside Derived constructor\n\n";
    }
    ~Derived()
    {
        cout << "Inside Derived destructor\n\n";
    }
};

int main()
{
    Derived dobj;
    return 0;
}