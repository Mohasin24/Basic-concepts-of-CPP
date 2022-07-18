#include<iostream>  // iostream = input output stream
using namespace std;

int main()   
{   
    int num;
    // For display output we use cout method 
    cout<<"Enter a number:-\n";
    // '<<' this is called insertion operator

    // For taking input we use cin method
    cin>>num;
    // '>>' This is called extraction operator
    // Here we do not need to use the addressof (&) operator for taking the input 

    cout<<"You have entered = "<<num<<"\n";
    // Here we do not need to use the format spacifier for displaying the output

    return 0;
}
