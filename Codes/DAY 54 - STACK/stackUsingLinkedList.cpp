#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    // Constructor
    Stack() {
        top = nullptr;
    }

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Function to pop an element from the stack
    void pop() {
        if (!isEmpty()) {
            Node* temp = top;
            top = top->next;
            delete temp;
        } else {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }

    // Function to get the top element of the stack
    int topElement() {
        if (!isEmpty()) {
            return top->data;
        } else {
            cout << "Stack is empty." << endl;
            return -1; // Assuming -1 represents an invalid value in the stack
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    // Creating a stack
    Stack myStack;

    // Pushing elements onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Displaying the top element
    cout << "Top element: " << myStack.topElement() << endl;

    // Popping an element
    myStack.pop();

    // Displaying the top element again
    cout << "Top element after pop: " << myStack.topElement() << endl;

    // Checking if the stack is empty
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
