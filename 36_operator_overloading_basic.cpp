/*
1. We cannot directly do arithmetic operation between two object that's why we have to use the concept of operator overloading
2. We can overload operator in two ways as a member function and as a friend function
3. 'operator' is a keyword '+' is a binary operator so it has two operands
4. To use a symbol as a function name we have to use 'operator' keyword otherwise compiler will generate an error 

*/

/*
    return              symbol to           
    value    keyword    be overloaded       parameters
      |         |            |                  |
    'Demo'  'operator'      '+'         '(Demo op1, Demo op2)'

*/

////// Operator over loading as a member function

#include<iostream>

using namespace std;

class Demo 
{
    public:
    int x;
    int y;

    // parameterised constructor
    Demo(int a = 10, int b = 20)
    {
        x = a;
        y = b;
    }

    // ~Demo()
    // {
    //     cout<<"\nInside destructor\n";
    // }

};

// member function
Demo operator + (Demo op1, Demo op2)
{
    cout<<"Inside + operator\n";
    return Demo((op1.x+op2.x),(op1.y+op2.y));
}

int main()
{   
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo robj(0,0);  // This is like empty bag in which we will collect the addition of (obj1 + obj2)

    //int iRet = obj1+obj2; //not allowed
    // cout<<iRet<<endl;

    robj = obj1+obj2;
    cout<<robj.x<<endl; //62
    cout<<robj.y<<endl; // 122

    return 0;
}