class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* curr = head;

        //calculating the length of linked list
        while(curr != nullptr) {
            length++;
            curr = curr -> next;
        }

        //finding position to remove
        int traverseTill = length - n -1;
        int i = 0;
        curr = head;
        
        //if the head needs to be removed
        if(traverseTill == -1){
            head = head -> next;
            delete curr;
            return head;
        }

        //traverse to the node before the one to be removed
        while(i < traverseTill){
            curr = curr ->  next;
            i++;
        }

        //remove nth node from the end
        ListNode* temp = curr -> next;
        curr -> next = curr -> next -> next;
        delete temp;

        return head;
    }
};