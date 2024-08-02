/*
Leetcode 876. Middle of the Linked List
Approach 1: Hare and tortoise algorithm
Space Complexity: O(1)
Time Complexity: O(n)
*/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){
            fast= fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
