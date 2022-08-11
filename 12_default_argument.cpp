/*
1> Default argument are considered as such a argument to the function which are optional
2> In case of normal argument we have to pass the parameter explicitly.
3> But in case of default argument we can skip this value
4> All the default argument should be at the end of the argument list
*/

// consider below example of area of circle

#include<iostream>

using namespace std;

class Area
{
    public:
    float RADIUS;
    float PI;

    // here we have passed value of pi as the default argument

    // Parametrised constructor with default argument
    Area(float radius, float pi = 3.14)
    {
        RADIUS = radius;
        PI = pi;
    }
    void CircleArea()
    {
        float Ans = 0.0;
        Ans = PI*RADIUS*RADIUS;
        cout<<"Area of circle is = "<<Ans<<endl;
    }
};

int main()
{

    Area obj1(5);

    // here we have passed the second argument explicitly
    Area obj2(5,2);

    obj1.CircleArea();
    obj2.CircleArea();

    return 0;
}