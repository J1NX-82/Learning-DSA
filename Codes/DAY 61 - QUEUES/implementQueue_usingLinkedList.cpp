#include <iostream>

using namespace std;

// Define a Node class for the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Define a Queue class using a linked list
class Queue {
private:
    Node* front;
    Node* back;

public:
    Queue() {
        front = NULL;
        back = NULL;
    }

    // Function to enqueue an element at the back of the queue
    void enqueue(int value) {
        Node* n = new Node(value);

        if(front == NULL){
            back = n;
            front = n;
            return;
        }

        back -> next = NULL;
        back = n;
    }

    // Function to dequeue an element from the front of the queue
    void dequeue() {
        if(front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }

        Node* toDelete = front;
        front = front -> next;
        
        delete toDelete;
    }

    // Function to get the front element of the queue
    int front() {
        if (front == NULL){
            cout << "No element is present in queue" << endl;
            return -1;
        }

        return front -> data;
        
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        if(front == NULL){
            return true;
        }
        return false;
    }

};

int main() {
    Queue queue;

    // Enqueue elements
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    // Display the front element
    cout << "Front element: " << queue.front() << endl;

    // Dequeue elements
    queue.dequeue();
    queue.dequeue();

    // Display the front element after dequeuing
    cout << "Front element after dequeuing: " << queue.front() << endl;

    // Check if the queue is empty
    if (queue.isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Display the size of the queue
    cout << "Queue size: " << queue.size() << endl;

    return 0;
}
