// Below are the function overloading criteria

#include <iostream>

using namespace std;

class Demo
{
public:
    int Addition(int no1, int no2)
    {
        int Ans = 0;
        Ans = no1 + no2;
        return Ans;
    }

    // We can overload the function by changing the number of parameters
    int Addition(int no1, int no2, int no3)
    {
        int Ans = 0;
        Ans = no1 + no2 + no3;
        return Ans;
    }

    // We can overload the function by changing the data type of parameters
    float Addition(float no1, float no2)
    {
        float Ans = 0;
        Ans = no1 + no2;
        return Ans;
    }

    // We can overload the function by changing the sequence of parameter
    void fun(char c, int i, float f)
    {
        cout << "Fun 1\n";
    }
    void fun(float f, int i, char c)
    {
        cout << "Fun 2\n";
    }

    // We cannot overload the function by just changing the return value of function
    // float Addition(int no1, int no2) // not allowed
    // {
    //     float Ans = 0;
    //     Ans = no1 + no2 + no3;
    //     return Ans;
    // }
};

int main()
{

    return 0;
}
