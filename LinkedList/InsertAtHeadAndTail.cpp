#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor of Node class 
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }
    
};

void insertAtHead(Node* &head, int d){
    
    //  create new node
    Node* temp = new Node(d);

    // Insertion at Head of the LL
    temp ->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    // create new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail ->next;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout <<endl;
}

int main() {
    //Created a new Node
    Node* node1 = new Node(10);
  //  cout << node1-> data <<endl;
   // cout << node1->next <<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);
    
    return 0;
}