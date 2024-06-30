// https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651073/offering/10442134?goalRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    while(head!= NULL){
      if (head->data == k) {
        return 1;
        break;
      }
      else
      head = head->next;
    }
    return 0;
}
