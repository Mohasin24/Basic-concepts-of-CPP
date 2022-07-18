#include<iostream>

using namespace std;

void Call_By_Value(int n);
void Call_By_Reference(int *n);

int main()
{
    int Num1 = 21;
    int Num2 = 51;

    // in call by value we only pass the copies of arguments, so any change to the value by function 
    // does not affect the original value

    cout<<"Before using call by value Num1 = "<<Num1<<endl;
    Call_By_Value(Num1);
    cout<<"After using call by value Num1 = "<<Num1<<endl;

    cout<<"\n\t*****\n";

    // in call by reference we pass the actual address of the argument, so any change to value by function 
    //changes the original value

    cout<<"Before using call by reference Num2 = "<<Num2<<endl;
    Call_By_Reference(&Num2);
    cout<<"After using call by reference Num2 = "<<Num2<<endl;

    return 0;
}

void Call_By_Value(int n)
{
    ++n;
}

void Call_By_Reference(int *n)
{
    ++*n;
}