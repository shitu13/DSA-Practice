// https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651073/offering/10442132?goalRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav


Node *findMiddle(Node *head) {
    // Write your code here
    Node* curr = head;
    int cnt =0;

    while(curr!=NULL){
        cnt++;
        curr = curr->next;
       
    }
    int half = cnt/2;
    while(half>0){
        head = head->next;
        half--;
    }
    return head;
}