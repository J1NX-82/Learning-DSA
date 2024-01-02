class Solution {
private:
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail -> next = newNode;
        tail = newNode;

    }
}
public:
    Node* copyRandomList(Node* head) {

        // Step 1 : Create a clone Linked List
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;

        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp -> val);
                temp = temp -> next;
            }
        
        // Step 2 : Create a map and assign random pointers
        unordered_map<Node*, Node*> oldToNew;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL){
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL){
            cloneNode -> random = oldToNew[originalNode -> random];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
    return cloneHead;
    }
};