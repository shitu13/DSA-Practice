//https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int cnt, int size){
   //base case
   if(cnt== size/2){
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();

   //Recursive Call
   solve(inputStack,  cnt+1,  size);

   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){

   int cnt = 0;
    solve(inputStack, cnt, N);
}