// we have to find the unique element in an array
// for example-[11,12,12,34,56,56,34] the unique element here is 11
// we will use XOR operator as the same number with xor cancel out each other and we will get the remaining single unique element

#include <iostream>
using namespace std;

int ans = 0;
int findUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int arr[8] = {11, 12, 12, 34, 56, 56, 34};
    int n = 8;

    int UniqueElement = findUnique(arr, n);
    cout << UniqueElement << endl;

    return 0;
}