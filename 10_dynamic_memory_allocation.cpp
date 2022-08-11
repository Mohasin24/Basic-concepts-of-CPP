/*
1> In C we uses the malloc(), calloc() and realloc() function for memory allocation and free() function to deallocation of memory, C++ also supports this function.
2> In C++ we can allocate the memory in much easier way by using the "new" operator.
3> Like C in C++ it is programmers responsibility to deallocate the resources, for this in C++ we use the "delete"  operator
4> For new operator we have to specify the number of elements that we want to allocate
5> new operator explicitly performs the typecasting so there is no need to typecast while allocating the memory
6> In case of delete operator we have to specify square bracket [] before the name of the pointer if we want to deallocate the memory for an array
7> If we not specify that square bracket then the delete operator will deallocate only the memory of first element. Due to which all the remaining elements are as it is in the memory which leads to memory leak.
*/

#include <iostream>

using namespace std;

int main()
{

    int *Ptr = NULL;

    /*
    ## C dynamic memory allocation

    Ptr = (int *)malloc(5*sizeof(int));
    Ptr =(int *)calloc(5,sizeof(int));
    Ptr = (int *)realloc(Ptr,5*sizeof(int));
    free(Ptr);
    */

    // C++ dynamic memory allocation

    int size = 5;
    Ptr = new int[size];

    if (Ptr == NULL)
    {
        cout << "Unable";
    }
    else
    {
        cout << "done\n";
    }
    Ptr[0] = 21;
    Ptr[1] = 51;
    Ptr[2] = 151;
    Ptr[3] = 251;
    Ptr[4] = 351;

    delete [] Ptr;

    Ptr = new int[8];    
    for(int i = 0; i<8; i++)
    {
        cout<<Ptr[i]<<endl;
    }
    delete [] Ptr;
    
    return 0;
}