/*
Leetcode 21. Merge Two Sorted Lists
Approach 1: Iterative method
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        if (l1->val > l2->val)
            swap(l1, l2);
        ListNode* res = l1;

        while (l1 != NULL && l2 != NULL) {
            ListNode* temp = NULL;
            while (l1 != NULL && l1->val <= l2->val) {
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2;
            swap(l1, l2);
        }
        return res;
    }
};



/*
Leetcode 21. Merge Two Sorted Lists
Approach 2: Using recursion
Space Complexity: O(1)
Time Complexity: O(n)
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        ListNode* result = NULL;

        if (list1->val > list2->val) {
            result = list2;
            result->next = mergeTwoLists(list1, list2->next);
        } else {
            result = list1;
            result->next = mergeTwoLists(list2, list1->next);
        }
        return result;
    }
};

