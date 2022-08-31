/*
1. For file handling in C++ we have to include the fstream header file
2. Usefull class for working with files in C++ are:
    1> fstreambase
    2> ifstream  ---> derived from fstreambase class
    3> ofstream  ---> derived from fstreambase class    
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1> Using the constructor
2> Using the member function open() of the class
*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = "\0";
    
    // opening a file using constructor & writing it
    ofstream out("sample.txt");

    cout<<"Enter your name :-  ";   
    getline(cin,st); // to take input a string with spaces

    out<<"hello "+st;  // C++ allowes concatination

    out.close(); // closing a file

    //reading file data
    ifstream get("sample.txt");
    string containt="\0";

    // get>>containt;
    getline(get,containt);  // reading string with spaces

    cout<<containt;

    
    

    return 0;
}