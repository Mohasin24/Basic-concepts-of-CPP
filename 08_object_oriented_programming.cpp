// Consider the below program which gives addition of two numbers.

#include<iostream>
using namespace std;

class Arithmetic
{
    public : // access specifiers

    // characteristics
    int x;
    int y;

    // Behaviours

    //Default constructor
    Arithmetic()
    {
        // The main purpose of the constructor is to initialised the characteristics of class
        cout<<"Inside default constructor\n";
        
        cout<<"Enter the number:-\n";
        cin>>x;
        cout<<"You have entered :- "<<x<<endl;
        // x = 0;
        y = 0;
    }

    // Parameterized constructor
    Arithmetic(int iNo1, int iNo2)
    {
        cout<<"Inside the parameterized constructor\n";
        x = iNo1;
        y = iNo2;
        cout<<"The value of of x & y are "<<x<<", "<<y<<endl;
    }

    // Destructor
    ~Arithmetic()
    {
        // destructor gets called number of times you have created the class object
        // it gets called at the end of program
        cout<<"inside the destructor\n";
    }

    int Addition()
    {
        int iAns = 0;
        iAns = x + y;
        return iAns;
    }

};

int main()
{   
    int iRet = 0;

    Arithmetic obj;
    Arithmetic obj2(21,51);

    iRet = obj2.Addition();

    cout<<"Addition is :- "<<iRet<<endl;

    return 0;
}


/*
                Arithmetic
            |----------------------|
            |   int x;             |    Characteristics
            |   int y;             |    
            |----------------------|
            |   Arithmetic();      |
            |  Arithmetic(int,int);|
            |   ~Arithmetic();     |    Behaviours
            |   Addition();        |
            |----------------------|  

*/