                /*********************************************************************/
            // >>>>>>>>>>>>>>> Reverse a linked list  <<<<<<<<<<<<<<    LEETCODE 206 /////


//Approach 1
Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head == NULL || head->next ==NULL)
	return head;

	Node* prev = NULL;
	Node* curr = head; 
	Node* forward = NULL;

	while(curr!= NULL){
		forward = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr =forward;
	}
	return prev;
}


//Approach 2
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