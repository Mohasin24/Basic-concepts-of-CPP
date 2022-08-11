/*
1> In this type of inheritance there should be two classes as base and derived
2> Base class gets inherited by the derived class
*/

#include <iostream>
using namespace std;

class Base
{
    int a;
public:
    int x, y;

    Base()
    {
        cout << "Inside base constructor\n";
    }

    ~Base()
    {
        cout << "Inside base destructor\n";
    }

    void fun()
    {
        cout << "Inside base fun\n";
    }
};

class Derived : public Base
{
public:
    int i, j;

    Derived()
    {
        cout<<"Inside Derived constructor\n";
        
    }

    ~Derived()
    {
        cout<<"Inside Derived destructor\n";
    }

    void gun()
    {
        cout<<"Inside gun\n";
        // a = 0; not allowed
    }
};

int main()
{
    Derived dobj;

    cout<<sizeof(dobj)<<endl;

    dobj.fun();
    dobj.gun();

    return 0;
}

/* 
class diagram

               Base
            |----------|              
            |int x;    |                          
            |int y;    |                          
            |----------|      
            |void fun()|
            |----------|  

              Derived
            |----------|              
            |int i;    |                          
            |int j;    |                          
            |----------|      
            |void gun()|
            |----------|

*/

/* 
object layout of derived class

              dobj  
        100 |----------|              
            |          |  Base :: x                        
        104 |----------|                
            |          |  Base :: y                        
        108 |----------|             
            |          |  Derived :: i                        
        112 |----------|              
            |          |  Derived :: j                        
        116 |----------|                          
                 
            
*/