class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Initialize two pointers: temp to store the current node and head2 for the new head
        ListNode* temp = nullptr;
        ListNode* head2 = nullptr;

        // Traverse the linked list while head is not nullptr
        while (head != nullptr) {
            // Save the reference to the current node in the temp pointer
            temp = head;

            // Move the head pointer to the next node
            head = head->next;

            // Point the next pointer of the current node to head2,
            // effectively reversing the pointer direction
            temp->next = head2;

            // Move the head2 pointer to the current node,
            // so that it becomes the new head of the reversed linked list
            head2 = temp;
        }

        // Once the loop finishes, head2 will be pointing to the new head
        // of the reversed linked list
        return head2;
    }
};