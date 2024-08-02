/*
Leetcode 141. Linked List Cycle
Approach 1: Iterative method
Space Complexity: O(1)
Time Complexity: O(n)
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};

