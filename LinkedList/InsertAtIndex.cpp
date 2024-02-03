#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data <<endl;
        ptr = ptr->next;
    }
}
 //inserting node at the given index the list

struct Node *insertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = new Node;
    struct Node *p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}

int main() {
    // Memory allocation in the HEAP
    struct Node *head = new Node;
    struct Node *second= new Node;
    struct Node *third= new Node;
    struct Node *fourth= new Node; 
    
    head->data =1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data =3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next =NULL;
    
    cout <<"Before insertion: "<< endl ;
    traversal(head);
    cout << endl;

    head = insertAtIndex(head, 80, 2);
    cout <<"After insertion: "<< endl ;

    traversal(head);

    return 0;
}