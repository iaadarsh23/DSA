#include <iostream>
using namespace std;

// we will use swap function
void reverseArr(int arr[7], int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[7] = {1,
                  2,
                  3,
                  4,
                  5,
                  6,
                  7};
    int size = 7;
    reverseArr(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}