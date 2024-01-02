// *Approach 1 : Using iterative way 
            //* a)In 1 loop count no. of 0s 1s 2s 
            //* b)In 2nd loop replace data of nodes with 0, 1, 2 and reduce the count

Node* sortList(Node *head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp -> data == 0){
            zeroCount++;
        }
        else if(temp -> data == 1){
            oneCount++;
        }
        else if(temp -> data == 2){
            twoCount++; 
        }

        temp = temp -> next;
    }

    temp = head;

    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
    return head;
}

// *Approach 2: (Data replacement not allowed)
            //* a)Create 3 seperate LL
            //* b)Merge them
Node* sortList(Node *head){






    
}
