#include <iostream>
using namespace std;

// reference is considered as the another name to an existing variable
// as it is an another name there is no seprate physical memory allocation for it
// to create a reference we use '&' operator on before the new variable name i.e. on left hand side

int main()
{
    int iNum = 51;

    int &iRef = iNum;

    cout << "Normal variable = " << iNum << endl;
    cout << "Reference variable = " << iRef << endl;

    // multiple reference to the single variable
    int iNo = 11;
    int &x = iNo;
    int &y = iNo;

    // reference to reference
    int iNo = 11;
    int &x = iNo;
    int &y = x;

    // Pointer to reference
    int iNo = 11;
    int &x = iNo;
    int *Ptr = &x;

    // referene to pointer
    int iNo = 11;
    int *Ptr = &iNo;
    int *(&x) = Ptr;

    // reference to an array
    int Arr[4] = {11, 21, 51, 101};
    int(&Brr)[4] = Arr;
    // here we have to compulsory specify the size of array

    return 0;
}