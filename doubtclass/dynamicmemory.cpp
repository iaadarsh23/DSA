#include <iostream>
using namespace std;
int main()
{
    //to allocate an integer to the heap memory
    //1 use new
    int *nptr = new int(5);

    //2. using the malloc , malloc returns the void pointer
    int *mptr = (int *) malloc(4);
    *mptr = 5;

    cout << *mptr << endl;

    //creating 1d array in heap

    int *ptr = new int[5];
    int *ptr= new int [5];
    cout << teri maa ki choot 
    cout << *ptr << endl;

    return 0;
}