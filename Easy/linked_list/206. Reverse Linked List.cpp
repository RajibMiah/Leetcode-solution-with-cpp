class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = NULL;
        ListNode* current = head;
        ListNode* next = NULL;

        while(current != NULL){
            next = current->next;
            current->next = newHead;

            newHead = current;
            current = next;
        }
        return newHead;
    }
};