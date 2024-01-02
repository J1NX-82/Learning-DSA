void removeDuplcates(Node* head){
    // base case
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;

    while (curr != NULL && curr -> next != NULL){
        if (curr->data == curr->next->data){
            curr -> next = curr -> next -> next;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}