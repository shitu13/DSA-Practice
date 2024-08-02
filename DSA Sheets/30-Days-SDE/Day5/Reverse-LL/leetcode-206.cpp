/*
Leetcode 206. Reverse Linked List
Approach 1: without recursion
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextptr;

        while(curr!=NULL){
            nextptr = curr->next;
            curr->next = prev;

            prev = curr;
            curr =nextptr;
        }
        return prev;
    }
};



/*
Leetcode 206. Reverse Linked List
Approach 1: with recursion
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    ListNode* reverseList(ListNode* &head) {
        if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* newhead = reverseList(head->next);
    head->next->next = head;
    head->next =NULL;

    return newhead;
    }
};
