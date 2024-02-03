#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;

};

int isEmpty(struct stack *ptr){
    if(ptr-> top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr){
    if(ptr-> top == ptr-> size-1){
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val){
    if(isFull(ptr))
        cout<<"Stack Overflow" << endl;
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(struct stack *ptr){
    if(isEmpty(ptr))
        cout<<"Stack Underflow" << endl;
    else{
        val = ptr->arr[ptr->top];
          ptr->top--;
    }
}


int main()
{
    struct stack *sp = new stack();
    sp-> size = 10;
    sp-> top = -1;
    sp-> arr = (int*) malloc(sp->size* sizeof(int));
    push(sp, 50);

    cout<<"Stack is Full" << isFull(sp)<<endl;
    cout<<"Stack is Empty" << isEmpty(sp)<< endl;

    return 0;
}