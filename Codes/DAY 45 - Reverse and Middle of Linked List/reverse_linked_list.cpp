#include<iostream>
using namespace std;

class Node{

    public:
    int data;   
    Node* next;
    // creating a constructor

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
// !Iterative Solution (using Loop)
    //*Time Complexity : O(n)
    //*Space Complexity : O(1)
Node* reverseLinkedList(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    // creating a pointer to keep track of next nodes
    Node* forward = NULL;

    while (curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    
}

// !Recursive Solution (using recursion)

void reverse(Node* &head, Node* curr, Node* prev){
    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head,forward, curr);
    curr -> next = prev;
}

Node* reverseLinkedList(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}
int main(){
   
    return 0;
}