class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0)
            return head;

        int n = 1;
        ListNode* curr = head;

        while (curr->next) {
            curr = curr->next;
            n++;
        }

        k = k % n;

        if (k == 0)
            return head;

        // Make the list circular
        curr->next = head;

        int pos = n - k;

        ListNode* temp = head;

        while (--pos)
            temp = temp->next;

        head = temp->next;
        temp->next = NULL;

        return head;
    }
};