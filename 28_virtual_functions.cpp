/*
1. If a class contains at least single virtual function or if class is derived from such a class which contains at least single virtual function in it then first 4/8 (according to pointer size in system) of that object are reserved as 'VPTR'

2. 'VPTR' is considered as a virtual pointer which points to a table which is called as 'VTABLE'.

3. 'VTABLE' is a table whhich contains address of all virtual functions from the class in which they are defined in the class.
*/

/*
1. When we use the concept of upcasting compiler will check the function from the class whose pointer is created.
2. If there is no such function in that class then the compiler will generate error. 
3. If function is there which is non-virtual then compiler will call that function immedietly
4. If the function is there in that class but it is virtual then the compiler will check the existance of that function from the class (Derived)
5. If the function is not there in the derived class then the base class function gets called. 
If it is there in the derived class then the function of derived class gets called.
*/

#include<iostream>

using namespace std;

class Base
{
    public:
    int x,y;

    virtual void fun()
    {
        cout<<"Base fun\n";
    }
    virtual void gun()
    {
        cout<<"Base gun\n";
    }
    virtual void run()
    {
        cout<<"Base run\n";
    }
    virtual void sun()
    {
        cout<<"Base sun\n";
    }
};

class Derived : public Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Derived fun\n";
    }

    void sun()
    {
        cout<<"Derived sun\n";
    }

    virtual void gun()
    {
        cout<<"Derived gun\n";
    }

    virtual void mun()
    {
        cout<<"Derived mun\n";
    }
};

int main()
{

    Base *bp = new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    // bp->mun(); // not allowed as base class does not contain function name mun()

    cout<<"Size of Base :- "<<sizeof(Base)<<endl;
    cout<<"Size of Derived :- "<<sizeof(Derived)<<endl;

    return 0;
}