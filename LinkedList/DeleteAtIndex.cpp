#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        cout << "Element: " << ptr->data <<endl;
        ptr = ptr->next;
    }
}

//Deleting an element at a given index from the linked list

struct Node *DeleteAtIndex (struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = head-> next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
};



int main() {

    // Memory allocation of the nodes in the HEAP
    struct Node *head = new Node;
    struct Node *second= new Node;
    struct Node *third= new Node;
    struct Node *fourth= new Node; 
    
    //Link the nodes
    head->data =1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data =3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next =NULL;
    
    cout <<"Before deletion: "<< endl ;
    traversal(head);
    cout << endl;

    cout <<"After deletion: "<< endl ;
    head = DeleteAtIndex(head, 2);
    traversal(head);

    return 0;
}