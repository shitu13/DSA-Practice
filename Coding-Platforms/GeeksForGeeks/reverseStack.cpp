        //https://www.geeksforgeeks.org/problems/reverse-a-stack/1


/////// Approach 1: Space Complexity: O(n)
class Solution{
public:
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        
        int top = St.top();
        St.pop();
        Reverse(St);
        
        stack<int> temp;
        
        while(!St.empty()){
            temp.push(St.top());
            St.pop();
        }
        
        St.push(top);
        
        while(!temp.empty()){
            St.push(temp.top());
            temp.pop();
        }
    }
};



/////// Approach 2: Space Complexity: O(1)
class Solution{
private:
    void insertAtBottom(stack<int> &St, int ele){
        if(St.empty()){
            St.push(ele);
            return;
        }
        
        int top = St.top();
        St.pop();
        insertAtBottom(St, ele);
        St.push(top);
    }
public:
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        
        int top = St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St, top);
    }
};