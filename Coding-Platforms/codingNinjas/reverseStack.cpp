// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>

void insertAtBottom(stack<int> &stack, int element){
    //base case
    if(stack.empty()){
        stack.push(element);
        return;
    }
    int num = stack.top();
    stack.pop();

    //recursive Call
    
    insertAtBottom(stack, element);
    stack.push(num);

}

void reverseStack(stack<int> &stack) {
    // Write your code here

    //base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive Call
    reverseStack(stack);

    insertAtBottom(stack, num);
}