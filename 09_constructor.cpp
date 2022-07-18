/*
1> Constructors is considered as an user defined function which gets called when we create the object of a class
2> Name of a constructor should be same as the name of the class
3> There should not be any return value for the constructor
4> Constructor is optional
5> Constructor is used to initialise the characteristics of the class as well as it is used to allocate the resources which is are required to our class
*/

/*
Default constructor :-
        Constructor does not accept any parameter
*/

/*
Parameterised constructor :- Constructor accepts any parameter
*/

/*
Copy constructor :- If the constructor accepts the object of a same class as a paremeter
then it is consider as the copy constructor
*/

#include <iostream>

using namespace std;

class Demo
{
public:
    // characteristics
    int x;
    int y;

    // default constructor
    Demo()
    {
        cout << "Inside the default constructor.\n";

        // here we can also take input from the user
        x = 0;
        y = 0;
    }

    // parameterised constructor
    Demo(int i, int j)
    {
        cout << "Inside the parameterised constructor.\n";

        x = i;
        y = j;
    }

    // Copy constructor
    // reference to the object
    Demo(Demo &ref)
    {
        // its characteristics will get initialised with the value of its reference object characetristics
        // copy constructor is such a constructor which performs copy one object into another object
        cout << "Inside the copy constructor.\n";
        x = ref.x;
        y = ref.y;
    }

    // destructor
    ~Demo()
    {
        cout << "Inside the destructor.\n";
    }
};

int main()
{

    Demo obj1;
    cout << "\t*****\n";
    Demo obj2(21, 51);
    cout << "\t*****\n";
    Demo obj3(obj2);
    cout << obj3.x << ", " << obj3.y << endl;

    return 0;
}
