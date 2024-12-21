#include <iostream>
using namespace std;
struct Queue {
    int size, cap;
    int *arr;
    Queue(int c) {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull() {
        return (size == cap);
    }
    bool isEmpty() {
        return (size == 0);
    }
    void enque(int x) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << x << endl;
            return;
        }
        arr[size] = x;
        size++;
    }
    void deque() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int getFront() {
        if (isEmpty())
            return -1;
        else
            return arr[0]; 
    }
    int getRear() {
        if (isEmpty())
            return -1;
        else
        return arr[size - 1]; 
    }
};
int main() {
    Queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    int sum = 0;
    while (!q.isEmpty()) {
        sum += q.getFront(); 
        q.deque(); 
    }
    cout << "Sum of elements in the queue: " << sum << endl;
    return 0;
}
