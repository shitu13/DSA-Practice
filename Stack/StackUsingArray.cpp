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

int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size * sizeof(int));

    struct stack *s = new stack;
    s-> size = 80;
    s-> top = -1;

    if(isEmpty(s))
        cout << "The stack is empty! ";
    else
        cout << "The stack is not empty! ";

    return 0;
}