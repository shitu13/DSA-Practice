//Delete Node in a Linked List - LEETCODE 237

// Approach 1
// Time Complexity: O(N)
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = NULL;

        while(node && node->next){
            node -> val = node ->next ->val;
            prev = node;

            node = node -> next;
        }
        prev ->next = NULL;
        delete(node);
    }
};

// Approach 2
// Time Complexity: O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {

        node->val = node->next->val;
        node->next = node -> next ->next;

    }
};