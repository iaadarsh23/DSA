// finding the minimum no in an array
#include <iostream>
// we are using the INT_MIN and INT_MAX macros that will be assigned to variable for comparison
#include <limits.h>
using namespace std;

void minValue(int arr[5], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "minimnum value in an array:" << min << endl;
}

int main() {
    int arr[5] = {10, 55, 1, 787, 4};
    int size = 5;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    minValue(arr, size);
    return 0;
}