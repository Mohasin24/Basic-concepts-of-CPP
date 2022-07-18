#include<iostream>
#include<iomanip> // header file to use manipulation methods

using namespace std;

int main()
{
    int a = 1, b = 21, c = 5151;
    
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    cout<<"The value of c = "<<c<<endl;
    
    cout<<"\t******\n";
    // By using the setw() method we can right justify the values
    cout<<"The value of a = "<<setw(4)<<a<<endl;
    cout<<"The value of b = "<<setw(4)<<b<<endl;
    cout<<"The value of c = "<<setw(4)<<c<<endl;

    return 0;
}