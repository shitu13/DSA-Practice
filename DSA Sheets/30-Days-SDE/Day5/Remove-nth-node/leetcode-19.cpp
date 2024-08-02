/*
Leetcode 19. Remove Nth Node From End of List
Approach 1: Iterative method
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 0; i < n; i++)
            fast = fast->next;

        if (!fast)
            return head->next;

        // Move both pointers until fast reaches the end
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete del;
        return head;
    }
};
