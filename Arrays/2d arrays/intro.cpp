#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {{1, 2, 0}, {3, 4}, {5, 6}};
    // printing all the elements of the array
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << endl;
        }
    }

    return 0;
}