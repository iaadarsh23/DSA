// sort zero and one
//  i/p=[0,1,0,1,1,1,0,0,0,1]
// o/p=[0,0,0,0,0,1,1,1,1,1]
#include <iostream>
using namespace std;

int zeroCount = 0;
int oneCount = 0;
void sortZeroOne(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else {
            oneCount++;
        }
        // part b
    }

    int index = 0;
    while (zeroCount--) {
        arr[index] = 0;
        index++;
        //[00000]
    }
    while (oneCount--) {
        arr[index] = 1;
        index++;
    }
}

int main() {
    int arr[10] = {0, 1, 0, 1, 1, 1, 0, 0, 0, 1};
    int n = 10;
    sortZeroOne(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}