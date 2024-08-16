/*
Leetcode 160. Intersection of Two Linked Lists
Approach 1: Optimized
Space Complexity: O(1)
Time Complexity: O(n)
*/


class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        if (a == NULL || b == NULL)
            return NULL;

        while (a != b) {
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }
        return a;
    }
};