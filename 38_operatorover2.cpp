/*

*/

#include <iostream>

using namespace std;

class Demo
{
public:
    int x;
    int y;

    Demo(int a, int b)
    {
        x = a;
        y = b;
    }
};

// Demo operator ++(Demo &op1)  // pre
// {
//     cout<<"Inside ++ opeartor\n";
//     ++op1.x;
//     ++op1.y;
//     return op1;
// }

Demo operator++(Demo &op, int) // Post
{
    cout << "After post increamenting\n";
    op.x++;
    op.y++;
    return Demo(op.x - 1, op.y - 1);
}

int main()
{
    Demo obj1(11, 21);
    Demo obj2(51, 101);
    Demo robj(0,0);

    // cout<<"Before pre increamenting\n";
    // cout<<obj1.x<<endl<<obj1.y<<endl;
    // ++obj1;
    // cout<<obj1.x<<endl<<obj1.y<<endl;

    // cout << "Before post increamenting\n";
    // cout << obj1.x << endl<< obj1.y << endl;
    robj = obj1++;
    cout << obj1.x << endl<< obj1.y << endl;


    return 0;
}