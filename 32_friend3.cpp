/*
Whole class can be a friend of our class
*/

#include <iostream>
using namespace std;

class Hello
{
public:
    void fun();
    void gun();
};

class Demo
{
public:
    int i;

protected:
    int j;

private:
    int k;

public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }

    friend void Hello::fun();
    friend void Hello::gun();
};

void Hello::fun()
{
    Demo obj1;
    cout << obj1.i << "\n";
    cout << obj1.j << "\n";
    cout << obj1.k << "\n";
}

void Hello::gun()
{
    Demo obj1;
    cout << obj1.i - 10<< "\n";
    cout << obj1.j - 10<< "\n";
    cout << obj1.k - 10<< "\n";
}

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    return 0;
}