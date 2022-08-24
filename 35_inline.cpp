/*
1. If the function is considered as inline function then the definition of the function gets copied at the point of function call which reduces the execution time of our application
2. Inline is considered as a request if that request is accepted by the compiler then our function is treated as as inline function otherwise it is considered as normal function.
3. Generallay if the length of the function is more, if it contains complecated loops, if it contains recursion , if it contains larger data types then the function is not considered as a inline function
*/

#include<iostream>
using namespace std;

class Demo
{
    public:
        inline int Add(int no1, int no2=5) // no2 default argument
        {   
            int ans = 0;
            ans = no1 + no2;   
            return ans;
        }
};

int main()
{
    Demo obj;
    int ret = 0;

    ret = obj.Add(10,45);  // if it gets considered as inline then Add() function body will get copied here

    cout<<ret<<"\n";        // 21

    return 0;
}