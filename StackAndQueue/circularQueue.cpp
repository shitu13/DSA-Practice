#include<iostream>
using namespace std;

struct circularqueue{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct circularqueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circularqueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q, int val){
    if(isFull(q))
        cout <<"The Queue is full" <<endl;
    else{
        q-> r++;
        q->arr[q->r] = val;
        cout << "Enqued element: " << val <<endl;
    }
}

int dequeue(struct circularqueue *q){
    int a = -1;
    if(isEmpty(q))
        cout <<"The Queue is empty!" <<endl;
    else{
        q-> f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularqueue q;
    q.size = 30;
    q.f = q.r = -1;
    q.arr = new int;


    //Enqueue some elements
    enqueue(&q, 17);
    enqueue(&q, 19);
    enqueue(&q, 12);
    enqueue(&q, 10);
    enqueue(&q, 11);


    if(isEmpty(&q)) 
        cout<<"The Queue is Empty" <<endl;
    if(isFull(&q)) 
        cout<<"The Queue is Full" <<endl;

    cout<<"Dequeue the element "<< dequeue(&q)<< endl;

    return 0;
}