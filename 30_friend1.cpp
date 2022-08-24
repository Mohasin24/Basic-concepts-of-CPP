/*
### Friend function

1. friend function is used to access non-public member of a class
2. If any function is considered as a friend then that function can access the private & protected members of a class.
*/

/*
## The concept of friend function is divided into 3 parts :-

1. Naked function can be a friend of our class
2. Member function of a class can be a friend of our class
3. Whole class can be a friend of our class
*/

#include <iostream>

using namespace std;

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
        i = 11;
        j=21;
        k=51;
    }

    friend void fun();
};

// Naked function can be a friend of our class
void fun()
{
    Demo obj1;

    cout<<obj1.i<<endl;
    cout<<obj1.j<<endl;
    cout<<obj1.k<<endl;
}

int main()
{
    fun();
    return 0;
}