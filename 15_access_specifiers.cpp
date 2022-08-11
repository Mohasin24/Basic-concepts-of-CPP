/*
1> The concept of access specifier is applicable to the characteristics as well as behaviours of class
2> Irrespective of the access specifier memory for all the elements gets allocated
3> If we do not assign any access specifier then the default access specifier gets assigned i.e. 'private' access specifier
*/

#include <iostream>

using namespace std;

class Demo
{
    //private :
    int i;

public:
    int x;

private:
    int y;

public:
    Demo()
    {
        cout << "Inside the constructor.\n";
        i = 11;
        x = 21;
        y = 51;
    }

    void fun()
    {   
        y = 101; // allowed
        cout << "Inside public fun.\n";
        cout <<"private i = "<< i << endl;
        cout <<"private y = "<< y << endl;
        gun();
    }

private:
    void gun()
    {
        cout << "Inside private gun.\n";
        cout <<"private y = "<< y << endl;
    }
};

int main()
{
    Demo obj;

    cout << obj.x << endl;
    // cout << obj.y << endl; // not allowed
    // cout << obj.i << endl; // not allowed 

    obj.fun();
    // obj.gun(); // not allowed

    return 0;
}