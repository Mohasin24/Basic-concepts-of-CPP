// Using the member function open() of the class

#include<iostream>
#include<fstream>

using namespace std;

int main()
{   
    // cout<<"Enter a string :-  ";
    // string put;
    // getline(cin,put);
    // // writing to a file
    // ofstream out;
    // out.open("sample1.txt");
    // out<<put;
    // out.close();  // member function to close the file

    // reading from a file

    ifstream read;
    read.open("sample1.txt");
    string st;
    getline(read,st);
    cout<<st<<endl;
    getline(read,st);
    cout<<st<<endl;
    read.close();  // member function to close the file

    return 0;
}