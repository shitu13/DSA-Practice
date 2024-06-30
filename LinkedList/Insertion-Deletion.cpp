#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // Constructor of Node class 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this-> data;
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is freed for: " << value <<endl;
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
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //Insert at starting position
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    } 

    //Inserting at the last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToinsert = new Node(d);
    
    nodeToinsert -> next = temp ->next;

    temp->next = nodeToinsert;
    
}

void print(Node* &head){
    
    Node* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout <<endl;
}

void deleteNode(int position, Node* &head){

    //deleting first or starting node
    if(position==1){
        Node * temp = head;
        head = head ->next;

    //Remove the memory of the start node.
    temp ->next = NULL;
    delete temp;
    }
        
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while( cnt< position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        
        delete curr;
    }
}

int main() {
    //Created a new Node
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

     
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    print(head);

    cout << "Insert 100 at 1st position: " <<endl;
    insertAtPosition(head, tail, 1, 100);
    print(head);
    
    cout <<"head value: "<< head->data <<endl;
    cout <<"Tail value: " << tail->data <<endl;

    deleteNode(5, head);
    print(head);

    // cout <<"Tail value: " << tail->data <<endl;
    return 0;
}