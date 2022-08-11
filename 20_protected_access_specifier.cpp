/*
#### protected access specifier
1> class members declared as Protected can be accessed by any subclass (derived class) of that class only.
2> Protected access specifier is not accessible in any naked function
*/

// C++ program to demonstrate
// protected access specifier
#include <iostream>
using namespace std;

// base class
class Parent
{
    // protected data members
protected:
    int id_protected;

public:
    void set_id(int id)    
    {
        id_protected=id;
    }
};

// sub class or derived class from public base class
class Child : public Parent
{
public:
    void setId(int id)
    {

        // Child class is able to access the inherited
        // protected data members of base class

        // id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};

class greatChild : public Child
{
public:
    void set(int great_id)
    {
        id_protected=great_id;
    }
};

// main function
int main()
{

    greatChild obj1;

    // member function of the derived class can
    // access the protected data members of the base class

    obj1.setId(90);
    obj1.displayId();
  
    return 0;
}
