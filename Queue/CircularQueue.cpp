#include <iostream>
using namespace std;

class Queue {
private:
    static const int SIZE = 5;
    int array[SIZE];
    int start;
    int end;
    int count;

public:
    Queue() {
        start = 0;
        end = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == SIZE;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        end = (end + 1) % SIZE;
        array[end] = value;
        count++;

        cout << value << " enqueued at index " << end << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << array[start] << " dequeued from index " << start << endl;
        start = (start + 1) % SIZE;
        count--;
    }

    void displayAll() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = 0; i < count; i++) {
            int index = (start + i) % SIZE;
            cout << array[index] << " ";
        }

        cout << endl;
        cout << "Start: " << start << " | End: " << end << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.displayAll();

    q.dequeue();
    q.dequeue();

    q.displayAll();

    // Circular wrap-around
    q.enqueue(60);
    q.enqueue(70);

    q.displayAll();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.dequeue();

    return 0;
}


