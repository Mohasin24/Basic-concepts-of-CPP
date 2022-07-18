#include<iostream>
using namespace std;

/*
   Data types in C++

   # Primitive data types
   1> char - 1 byte 
   2> integer - 4 byte
   3> float - 4 byte
   4> double - 8 byte
   5> boolene - 1 byte ;true or false

   # Derived data types
   1> Function
   2> Array
   3> Pointer
   4> Reference

   # User defined data types
   1> Class
   2> Structure 
   3> Union
   4> Enumeration
*/

int main()
{
    cout<<"Size of char is = "<<sizeof(char)<<"\n";
    cout<<"Size of bool is = "<<sizeof(bool)<<"\n";
    cout<<"Size of integer is = "<<sizeof(int)<<"\n";
    cout<<"Size of float is = "<<sizeof(float)<<"\n";
    cout<<"Size of double is = "<<sizeof(double)<<"\n";
    cout<<"Size of pointer is = "<<sizeof(int *)<<"\n";
 
    return 0;
}