// count 0 and 1 in an array
#include <iostream>
using namespace std;

void count(int arr[5], int size) {
    int countZero = 0;
    int countOne = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            countZero++;
        } else {
            countOne++;
        }
    }
    cout << "Zerocount:" << countZero << endl;
    cout << "Onecount:" << countOne << endl;
}

int main() {
    int arr[10] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1};
    int size = 10;
    count(arr, size);
    return 0;
}