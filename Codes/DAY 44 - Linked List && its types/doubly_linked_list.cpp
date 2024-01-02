// Doubly linked list consists of 3 components:
    //*address of previous element 
    //*data 
    //*address of next element

#include<iostream>
using namespace std;

// !Creation of Doubly Linked List
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    // destructor
    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};
// !Printing Linked List
void print(Node* head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;    
}
// !Length of Linked List
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while (temp != NULL){
        len++;
        temp = temp -> next;
    }   
    return len;
}

//! Insertion 
    //*at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
    //*at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
    //*at any Position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    // inserting at Last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
// !Deletion in Linked List
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << "Length of node is : " << getLength(head) << endl;

    insertAtHead(head, 20);
    print(head);
    cout << "Length of node is : " << getLength(head) << endl;

    insertAtTail(tail, 69);
    print(head);
    cout << "Length of node is : " << getLength(head) << endl;

    insertAtPosition(tail,head,3,14);
    print(head);
    cout << "Length of node is : " << getLength(head) << endl;

    deleteNode(3, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;



    return 0;
}