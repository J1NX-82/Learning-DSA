bool floydDetectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && slow != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    if(fast == slow){
        // loop exists
        return true;
    }
    else{
        return false;
    }
}