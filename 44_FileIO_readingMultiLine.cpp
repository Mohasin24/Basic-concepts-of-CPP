/*
1. To read multiple lines from a file we have to use the "eof()" method i.e. end of file

*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st;

    ifstream red;
    red.open("sample1.txt");

    while (red.eof()==0)
    {
        getline(red,st);
        cout<<st<<endl;
    }
    red.close();
    

    return 0;
}