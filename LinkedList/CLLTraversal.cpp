#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *head){
    struct Node *ptr = head;
    do{
        cout << "Element: " << ptr->data <<endl;
        ptr = ptr->next;
    }while(ptr!=head);
}

 //inserting node at the first position of the list
struct Node* insertAtFirst(struct Node *head, int data){
    struct Node *ptr = new Node;
    ptr->data = data;
    
    struct Node *p = head -> next;
    while (p->next!= head){
        p= p->next;
    }

    //At this point p points to the last node of this circular linked list
    p -> next = ptr;
    ptr -> next = head;
    return head;
};

int main() {

    // Memory allocation of the nodes in the HEAP
    struct Node *head = new Node;
    struct Node *second= new Node;
    struct Node *third= new Node;
    struct Node *fourth= new Node; 
    struct Node *fifth = new Node;
    
    //Link the nodes
    head->data =1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data =3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next =fifth;

    fifth->data = 5;
    fifth->next =head;
    
    cout << "Traversal before insertion: "<< endl;
    traversal(head);

    head = insertAtFirst(head, 800);
    cout << "Traversal after insertion: "<< endl;
    traversal(head);
   
    return 0;
}