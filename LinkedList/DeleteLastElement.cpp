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

//Deleting the last element from the linked list

struct Node *DeleteLastNode (struct Node *head){
    struct Node *p = head;
    struct Node *q = head-> next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
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
    head = DeleteLastNode(head);

    traversal(head);


    return 0;
}