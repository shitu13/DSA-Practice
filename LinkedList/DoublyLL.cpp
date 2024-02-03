#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
    cout << "Element: " << ptr->data<<endl;
    ptr = ptr-> next;
    }
}

void traversalrev(struct Node *ptr){
    while(ptr!=NULL){
    cout << "Element: " << ptr->data<<endl;
    ptr = ptr-> prev;
    }
}


int main() {
    
    // Memory allocation in the HEAP
    struct Node *N1 = new Node;
    struct Node *N2= new Node;
    struct Node *N3 = new Node;
    struct Node *N4 = new Node;

    N1 ->data =1;
    N1->next = N2;
    N1 ->prev = NULL;

    N2 ->data =2;
    N2->next = N3;
    N2 ->prev = N1;

    N3 ->data =3;
    N3->next = N4;
    N3 ->prev = N2;

    N4 ->data =4;
    N4->next = NULL;
    N4 ->prev = N3;


    cout <<"Traversal right order: "<< endl;
    traversal(N1);

    cout <<"Traversal reverse: " <<endl;
    traversalrev(N4);

    return 0;
}