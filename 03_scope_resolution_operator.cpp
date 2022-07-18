#include<iostream>
using namespace std;

int iGlobal = 21;

int main()
{   
    // if name of local and global variable are same then to access the global variable 
    // we have to use the scope resolution operator (::)

    int iGlobal = 51;

    cout<<"Local variable = "<<iGlobal<<endl;
    cout<<"Global variable = "<<::iGlobal<<"\n";

    // endl is used to print the new line like "\n"

    return 0;
}