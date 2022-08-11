// In function overloading two or more functions can have the same name but different parameters
// It can be considered as the example of pollymorphism

#include <iostream>

using namespace std;

// In this below example we have Addition function with different number of parameters
// In the below example there is zero characteristics and three behaviours.
// As size of class is summation of all its characteristics, so if there is zero characteristics then the size of the class object is 1 byte
class Demo
{
public:
    Demo();
    ~Demo();
    int Addition(int no1, int no2)
    {
        int Ans = 0;
        Ans = no1 + no2;
        return Ans;
    }
    int Addition(int no1, int no2, int no3)
    {
        int Ans = 0;
        Ans = no1 + no2 + no3;
        return Ans;
    }
    int Addition(int no1, int no2, int no3, int no4)
    {
        int Ans = 0;
        Ans = no1 + no2 + no3 + no4;
        return Ans;
    }
    void fun();
};

// We can also write the constructor and destructor in this way by using '::' scope resolution operator but before we have to declare there pototype inside the class
Demo::Demo()
{
    cout << "Inside the constructor\n";
}

Demo::~Demo()
{
    cout << "Inside the destructor\n";
}

// we can write the function body outside the class but before we have to declare that function inside the class
void Demo::fun()
{
    cout << "Inside the demo fun\n";
}

int main()
{
    Demo obj;
    int ret = 0;
    cout << "Class contains zero characteristics sizeof object = " << sizeof(obj) << endl;

    ret = obj.Addition(11, 21);
    cout << ret << endl;

    ret = obj.Addition(11, 21, 51);
    cout << ret << endl;

    ret = obj.Addition(11, 21, 51, 101);
    cout << ret << endl;

    obj.fun();

    return 0;
}
