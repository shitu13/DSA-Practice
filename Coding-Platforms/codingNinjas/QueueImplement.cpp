// https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab

#include <bits/stdc++.h> 
class Queue {
        int* arr;
        int qfront;
        int rear;
        int size;
public:
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size)
            cout << "Queue is Full" <<endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        int ans = arr[qfront];
        if(isEmpty())
            return -1;
        else{
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront =0; 
                rear = 0;
            }
        }
        return ans;
    }

    int front() {
        // Implement the front() function
        if(qfront == rear)
            return -1;
        else
            return arr[qfront];
    }
};