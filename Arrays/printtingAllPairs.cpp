// we have to print all the pairs of element in an array

// #include <iostream>
// using namespace std;

// void buildPairs(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i] << " " << arr[j] << endl;
//         }
//     }
// }

// int main() {
//     int arr[5] = {10,
//                   20,
//                   30,
//                   40,
//                   50};
//     int n = 5;
//     buildPairs(arr, n);
//     return 0;
// }

// part b :- we can print the triplets with same logic

#include <iostream>
using namespace std;

void buildPairs(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }
}

int main() {
    int arr[5] = {10,
                  20,
                  30,
                  40,
                  50};
    int n = 5;
    buildPairs(arr, n);
    return 0;
}
