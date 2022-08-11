/*

*/

#include <iostream>

using namespace std;

class GrandParent
{
public:
    int a, b;

    GrandParent()
    {
        cout << "Inside GrandParent constructor\n";
        a = 11;
        b = 21;
    }

    ~GrandParent()
    {
        cout << "Inside GrandParent destructor\n";
    }
};

class Parent : public GrandParent
{
public:
    int i, j;
    Parent()
    {
        cout << "Inside Parent constructor\n";
        i = 51;
        j = 101;
    }

    ~Parent()
    {
        cout << "Inside Parent destructor\n";
    }
};

class Child : public Parent
{
public:
    int x, y;
    Child()
    {
        cout << "Inside Child constructor\n";
        x = 151;
        y = 201;
    }

    ~Child()
    {
        cout << "Inside Child destructor\n";
    }

    void display()
    {   
        cout<<"\n\n";
        cout<<"Value of a ="<<a<<endl;
        cout<<"Value of b ="<<b<<endl;
        cout<<"Value of i ="<<i<<endl;
        cout<<"Value of j ="<<j<<endl;
        cout<<"Value of x ="<<x<<endl;
        cout<<"Value of y ="<<y<<endl;
        cout<<"\n*********\n";
    }
};

int main()
{    
    Child cobj;
    cobj.display();
    
    return 0;
}