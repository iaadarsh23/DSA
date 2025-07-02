#include <iostream>
using namespace std;
int main()
{   
    const int *p = new int(3);
    //we cannot reassign the value;
    cout << *p << endl;
    //bt we can reassign the pointer itself
    int b=5;
    p=&b;
    cout << *p << endl;



    return 0;
}