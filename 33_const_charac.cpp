/*
1. If the characteristics of a class is constant then we can not change the value of that characteristics.
2. Constant characteristics should be immedietly initialise at the time of its definition
3. To initialize the constatnt characteristics we have to use the concept of member initialisation with the constructor.
4. In case of member initialisation we have to initialise the variable immedietly  after the prototype of constructor.
5. By using this initialisation technique we can initialize any type of characteristics
*/

#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(51)
        {
            i = 10;
            // j = 20; Not Allowed
        }

        Demo(int a, int b) :i(a), j(b)
        {   
            // i = a; Not Allowed
            // j = b; Not Allowed
            cout<<"Inside parametrised\n";
        }
};

int main()
{
   Demo obj(11,21);

   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";

   obj.i++;
    // obj.j++;
   cout<<obj.i<<"\n";
   
   Demo obj1;
   cout<<obj1.j<<"\n";

    return 0;
}