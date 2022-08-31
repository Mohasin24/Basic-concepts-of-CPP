#include <iostream>

using namespace std;

class Demo
{
public:
    int x;
    int y;

    Demo(int a, int b)
    {
        x = a;
        y = b;
    }
};

void operator==(Demo op1, Demo op2)
{
    cout << "Inside == operator\n";
    if ((op1.x == op2.x) && (op1.y == op2.y))
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }
}

void operator<(Demo op1, Demo op2)
{
    cout << "Inside < operator\n";
    if ((op1.x < op2.x) && (op1.y < op2.y))
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }
}

void operator>(Demo op1, Demo op2)
{
    cout << "Inside > operator\n";
    if ((op1.x > op2.x) && (op1.y > op2.y))
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }
}
void operator<=(Demo op1, Demo op2)
{
    cout << "Inside <= operator\n";
    if ((op1.x <= op2.x) && (op1.y <= op2.y))
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }
}
void operator>=(Demo op1, Demo op2)
{
    cout << "Inside >= operator\n";
    if ((op1.x >= op2.x) && (op1.y >= op2.y))
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }
}

int main()
{
    Demo obj1(11, 21);
    Demo obj2(11, 101);

    obj1 == obj2;

    obj1<obj2;  //less than

    obj1<=obj2; //less than equal to

    obj1>obj2; // greater than

    obj1>=obj2; // greater than equal to

    return 0;
}