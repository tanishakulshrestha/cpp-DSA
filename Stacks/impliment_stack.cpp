#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int capacity;
    int top;

public:
    // Constructor to initialize stack
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    // Destructor to free memory
    ~Stack() {
        delete[] arr;
    }

    // Add element to the stack
    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    // Remove element from stack
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1; // or throw exception
        }
        return arr[top--];
    }

    // Get the top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Get current size of stack
    int size() {
        return top + 1;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is " << s.peek() << "\n";

    cout << "Stack size is " << s.size() << "\n";

    cout << s.pop() << " popped from stack\n";

    cout << "Top element is " << s.peek() << "\n";

    return 0;
}
