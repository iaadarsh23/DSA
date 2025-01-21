#include <iostream>
using namespace std;

bool linearSearch(int arr[5], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        } else {
            return false;
        }
    }
}
int main() {
    int arr[5] = {67,
                  89,
                  56,
                  34,
                  56};
    int size = 5;
    int target;
    cout << "enter the target: ";
    cin >> target;
    bool val = linearSearch(arr, size, target);
    if (val == true) {
        cout << "element found " << endl;
    } else {
        cout << "element not found";
    }

    return 0;
}