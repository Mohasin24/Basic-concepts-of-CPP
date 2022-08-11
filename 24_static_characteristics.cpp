/*
1. staic variable / class variable
2. static method / class method

*/

/*
1. We cannot initialise static characteristics inside constructor
2. Static characteristics should be initialised after class declaration
3. Without creating the object of a class we can access the static characteristics using the class name
4. Memory for the static characteristics gets allocated at the load time. When the exe gets loaded in the main memory by the loader memory for the static variable gets allocated at that time
5. Memory for static variable gets allocated inside the static segment and only once.
6. If we create N objects of a class then the memory for instance variable gets allocated N times & the memory for static variable gets alloacated only once.
7. static variable also have the effect of access specifiers
8. Default value of static variable is zero
*/

//// In short static characteristics is a commonn for all the object of a class

#include <iostream>

using namespace std;

class Demo
{
private:
    static int y; // here static is oop concept not an storage class

public:
    int i, j; // non-static / instance variables

    static int x; // static / class variable

    Demo()
    {
        cout << "Inside default constructor\n";
        i = 11;
        j = 21;
        // x = 51; does not work
    }
    void get_data()
    {
        cout << "value of x =" << x << endl;
    }
    ~Demo()
    {
        cout << "Inside destructor\n";
    }
};

int Demo ::x = 51;
// int Demo ::y = 101;

void fun()
{
    static int i = 0; // here we used static storage class
    cout << i << endl;
    i++;
}

int main()
{
    Demo dobj;
    dobj.get_data();
    cout << "Accessing x by class name x = " << Demo::x << endl;

    // cout << Demo::y << endl;  // Not allowed

    cout << "Size of Demo class = " << sizeof(Demo) << endl;

    cout<<"Static storage class demonstration :-\n";
    fun();
    fun();
    fun();

    return 0;
}