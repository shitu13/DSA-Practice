/*
Leetcode 237. Delete Node in a Linked List
Approach 1: Iterative method
Space Complexity: O(1)
Time Complexity: O(1)
*/

class Solution {
public:
    void deleteNode(ListNode* node) {

        node->val = node->next->val;
        node->next = node -> next ->next;

    }
};
