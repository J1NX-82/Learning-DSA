class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // base case.
        if(head == NULL){
            return NULL;
        }
        // step 1 : reverse first K nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;

        int count = 0;

        while(curr != NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // step 2 : recursion pe chorr do
        if(next != NULL){
            head -> next = reverseKGroup(next, k);
        }
        
        // step 3: return head of reversed list
        return prev;
    }
};