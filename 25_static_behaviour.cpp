/*
1. non - static variable / instance variable
2. non - static method / instance method
*/

/*
1. If we want to access the method without creating the object of a class then we can create a static method
2. As there is no caller object is required for static method we can't use this pointer to for that function
3. Static method can access only static characteristics.
4. Non - statics method can access static as well as non - static characteristics
*/

#include <iostream>

using namespace std;

class Demo
{
public:
    int i, j;     // instance variable (non-static)
    static int x; // class variable (static)

    Demo()
    {
        cout << "Inside constructor\n";

        i = 11;
        j = 21;
    }

    void fun() // instance behaviour (non-static behaviour)
    {
        cout << "Inside fun\n";
    }

    static void gun(int a); // class behaviour (static behaviour)

    //static void gun(int a) // class behaviour (static behaviour)
    // {
    //     x = a;
    //     cout << "Value of x = " << x << endl;
    //     // cout<<"Value of i = "<<i<<endl; // Not allowed
    // }

    ~Demo()
    {
        cout << "Inside destructor\n";
    }
};

int Demo ::x = 51;

void Demo ::gun(int a)
{
    x = a;
    cout << "Value of x = " << x << endl;
    // cout<<"Value of i = "<<i<<endl; // Not allowed
}

int main()
{
    cout << "X = " << Demo::x << endl;

    Demo ::gun(101);

    Demo dobj;

    dobj.gun(151);

    return 0;
}