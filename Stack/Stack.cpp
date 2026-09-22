#include <iostream>
using namespace std;

class Stack {
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top++;
        arr[top] = value;
        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }

        cout << arr[top] << " popped from stack." << endl;
        top--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Top element: " << arr[top] << endl;
    }

    void displayAll() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack: ";

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    Stack s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Display stack
    s.displayAll();

    // View top element
    s.peek();

    // Remove top element
    s.pop();

    // Display stack again
    s.displayAll();

    // Test overflow
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    // Test underflow
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}
