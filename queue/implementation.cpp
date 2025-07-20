#include <iostream>
using namespace std;

class Queue {
    int size;
    int* arr;
    int front;
    int rear;

    Queue(int size) {
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }
    // push ka logic
    void push(int data) {
        if (front == -1 && rear == -1) {
            // its empty push the first value;
            front++;
            rear++;
            arr[rear] = data;
        } else if (rear == arr.size() - 1) {
            cout << "quue is fulll " << endl;
        } else {
            rear++;
            arr[rear] = data;
        }
    }
};

int main() {
    return 0;
}