#include <iostream>
using namespace std;

class Queue {
    int size;
    int* arr;
    int front;
    int rear;

   public:
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
        } else if (rear == size - 1) {
            cout << "quue is fulll " << endl;
            return;
        } else {
            rear++;
            arr[rear] = data;
        }
    }

    // pop ka logic

    void pop() {
        // humee pop front se hoga (FIFO)
        if (front == -1 && rear == -1) {
            cout << " Q is empty cannot pop" << endl;
            return;
        }
        // agar single element hai toh
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            arr[front] = -1;
            front++;
        }
    }
    int getSize() {
        if (front == -1 && rear == -1) {
            return 0;
        }
        return (rear - front + 1);
    }
    void print() {
        cout << " printing the queue: ";
        if (front == -1 && rear == -1) {
            cout << "Queue is empty";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    cout << " size of queue :" << q.getSize() << endl;
    cout << "after pop" << endl;
    q.pop();
    q.print();
    cout << " size of queue :" << q.getSize() << endl;
    return 0;
}