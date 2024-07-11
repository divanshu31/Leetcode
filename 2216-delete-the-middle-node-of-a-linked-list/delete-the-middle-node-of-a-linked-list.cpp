
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL) return NULL;
        ListNode *slow = head;
        ListNode *fast = head -> next;
        ListNode * back = NULL;
        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL) fast = fast -> next;
            back = slow;
            slow = slow -> next;
            if(slow == fast) break;
        }
        back-> next = slow -> next;
        delete(slow);
        return head;
    }
};