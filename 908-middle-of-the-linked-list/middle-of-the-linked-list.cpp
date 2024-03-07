class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slowGulli = head;
        ListNode* fastGulli = head;

        while(fastGulli != NULL && fastGulli -> next != NULL){
        slowGulli = slowGulli -> next;
        fastGulli = fastGulli->next->next;
        }
        return slowGulli;
    }

};