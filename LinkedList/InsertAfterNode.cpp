#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

 //inserting node after a particular node
struct Node* insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node *ptr = new Node;
    
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        cout << "Element: " << ptr->data <<endl;
        ptr = ptr->next;
    }
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


    head = insertAfterNode(head, third, 50);
    cout <<"After insertion: "<< endl ;
    traversal(head);

    return 0;
}