/*
#### Private access specifiers
1> It is considered as the default access specifier in C++
2> If any of data is not written with any specific access specifier then it is by default considered as 'private'
3> The class members declared as private can be accessed only by the member functions inside the class.
4> They are not allowed to be accessed directly by any object or function outside the class.
5> Only the member functions or the friend functions are allowed to access the private data members of the class.
6> Private data member cannot be inherited by the derived class
*/

// C++ program to demonstrate private
// access specifier

#include <iostream>
using namespace std;

class Circle
{
    // private data member
private:
    double radius;

    // public member function
public:
    double compute_area(double r)
    {
        // member function can access private
        // data member radius
        radius = r; // allowed

        double area = 3.14 * radius * radius;

        cout << "Radius is: " << radius << endl;
        cout << "Area is: " << area<<endl;
    }
};

class Demo : public Circle
{
public:
    Demo()
    {
        cout<<"Inside Demo constructor\n";
        // radius = 3;
    }
    void fun()
    {
        compute_area(5);
    }
    ~Demo()
    {
        cout<<"Inside Demo destructor\n";
    }
};

// main function
int main()
{
    // creating object of the class
    Circle obj;

    // trying to access private data member
    // directly outside the class
    // obj.radius = 1.5;  // Not allowed

    obj.compute_area(1.5);

    Demo obj2;
    obj2.fun();

    return 0;
}
