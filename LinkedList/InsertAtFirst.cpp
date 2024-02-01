#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

 //inserting node at the first position of the list
struct Node* insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        cout << "Element: " << ptr->data <<endl;
        ptr = ptr->next;
    }
}

int main() {
    // Memory allocation in the HEAP
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second= (struct Node*)malloc(sizeof(struct Node));
    struct Node *third= (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth= (struct Node*)malloc(sizeof(struct Node)); 
    
    head->data =1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data =3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next =NULL;
    
    head = insertAtFirst(head, 0);
    traversal(head);

    return 0;
}