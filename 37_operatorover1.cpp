/*
Here we will perform following operations on two obejcts of a class

1. + (Addition)
2. - (Subtraction)
3. * (multiplication)
4. / (Division)
5. %  (mod)
*/

//// Operator overloading as a friend function
// it is technically good practice to use 

#include <iostream>

using namespace std;

class Demo
{
    // public:
    int x, y;

public:
    Demo(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << x << endl<< y << endl;
    }
    // By using friend function concept we can access the non-public components of a class
    friend Demo operator+(Demo op1, Demo op2);
    friend Demo operator-(Demo op1, Demo op2);
    friend Demo operator*(Demo op1, Demo op2);
    friend Demo operator/(Demo op1, Demo op2);
    friend Demo operator%(Demo op1, Demo op2);
};

Demo operator+(Demo op1, Demo op2)
{
    cout << "Inside + operator\n";
    return Demo((op1.x + op2.x), (op1.y + op2.y));
}

Demo operator-(Demo op1, Demo op2)
{
    cout << "Inside - operator\n";
    return Demo((op1.x - op2.x), (op1.y - op2.y));
}

Demo operator*(Demo op1, Demo op2)
{
    cout << "Inside * operator\n";
    return Demo((op1.x * op2.x), (op1.y * op2.y));
}
Demo operator/(Demo op1, Demo op2)
{
    cout << "Inside / operator\n";
    return Demo((op1.x / op2.x), (op1.y / op2.y));
}

Demo operator%(Demo op1, Demo op2)
{
    cout << "Inside % operator\n";
    return Demo((op1.x % op2.x), (op1.y % op2.y));
}

int main()
{

    Demo obj1(11, 21);
    Demo obj2(51, 101);
    Demo robj(0, 0);

    robj = obj1 + obj2;
    robj.display();

    robj = obj1 - obj2;
    robj.display();

    robj = obj1 * obj2;
    robj.display();

    robj = obj1 / obj2;
    robj.display();

    robj = obj1 % obj2;
    robj.display();
    

    return 0;
}