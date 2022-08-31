/*
<< insertion operator
>> extraction operator
*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = "\0";
    
    // opening a file using constructor & reading it

    ifstream in("sample.txt");

    // in>>st; //did not read string with spaces

    getline(in,st); // reading string with spaces

    cout<<st<<endl;  
    return 0;
}