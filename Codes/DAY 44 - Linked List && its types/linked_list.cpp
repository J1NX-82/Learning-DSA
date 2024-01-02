// Linked List is a dynamic data structure having multiple nodes which contains address of next node 
// (where no extra memory is reqd like vector
// :1 which is a static data structure
// :2 and it doubles the size if initialized size is occupied
// :3 and copies all the element in the new copy)

// Insertion Deletion of Data is easier in case of Linked List (no shifiting required)

// Types of Linked List:
    // Singly,
    // Doubly 
    // Circular
    // Circular doubly LL

#include<iostream>
using namespace std;

//!Singly Linked List

class Node{

    public:
    int data;   
    Node* next;
    // creating a constructor

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // creating a destructor
    ~Node(){
        int value = this -> data;
        if (this-> next != NULL){
            delete next;
            this -> next = NULL;
            cout << "Memory is free for node with data : " << value << endl;
        }
            
    }
};
//*Insertion at HEAD in Linked List 
void InsertAtHead(Node* &head, int d){
    // new node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//*Insertion at TAIL in Linked List 
void InsertAtTail(Node* &tail, int d){
    // new node creation
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

//*Insertion at MIDDLE in Linked List 
void InsertInPosition(Node* &tail, Node* &head, int pos, int val){

    if(pos == 1){
        InsertAtHead(head, val);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }

    // inserting at Last position
    if(temp -> next == NULL){
        InsertAtTail(tail, val);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(val);
    nodeToInsert -> next = temp -> next;  
    temp -> next = nodeToInsert;

}   

//* Deletion : 
void deleteNode(int position, Node* &head){
    // deleting first / start of a node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1; 
        while (cnt <= position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        
    }
}

//*Printing the Linked List
void print(Node* &head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    // creating a new node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // head pointed to node1
    Node* head = node1;
    // tail pointed to node 1
    Node* tail = node1;

    cout << "Before Insertion : " << endl;

    print(head);
    InsertInPosition(tail, head, 3, 22);

    InsertAtHead(head, 12);

    InsertAtTail(tail, 14);
    cout << "After Insertion : " << endl;

    deleteNode(1, head);
    print(head);

    print(head);

    return 0;
}