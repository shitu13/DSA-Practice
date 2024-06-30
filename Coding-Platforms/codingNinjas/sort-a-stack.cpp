// https://www.naukri.com/code360/problems/sort-a-stack_985275?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h> 
void sortedInsert(stack<int> &s, int num){
	//base case
	if(s.empty() || s.top()<num){
		s.push(num);
		return;
	}

	int n = s.top();
	s.pop();

	sortedInsert(s, num);
	s.push(n);
	return;
}

void sortStack(stack<int> &stack)
{
		// base case
        if (stack.empty()) {
			return;
		}

		int num = stack.top();
		stack.pop();

		//recursive Call

		sortStack(stack);
		sortedInsert(stack, num);		
}