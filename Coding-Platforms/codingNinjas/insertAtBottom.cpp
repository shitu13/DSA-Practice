// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 

void solve(stack<int>& st, int x){
    
    //base case
    if(st.empty()){
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    //Recursive Call
    solve(st, x);
    st.push(num);
    return;
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack, x);
    return myStack;
}