// linear search
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {20, 88, 99, 67, 97};
    int size = 5;
    bool flag = 0;
    int target = 6;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1
        }
    }
    if (flag == 1)
    {
        cout << "elemet found";
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}