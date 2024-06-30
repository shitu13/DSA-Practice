Reverse The Array after given position

//https://www.naukri.com/code360/problems/reverse-the-array_1262298?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m){
    // Write your code here      

    stack<int> st;
  
    for(int i= m+1; i<arr.size(); i++){
        st.push(arr[i]);
    } 	


    for(int i = m+1; i<arr.size(); i++){
        arr[i] = st.top();
        st.pop();
    }

}

int main() {
    vector<int> arr {1, 2, 3, 4, 5, 6};
    int m = 3;
    
    reverseArray(arr, m);
    
    for(int i=0; i<arr.size(); i++)
    cout << arr[i] << " ";

    return 0;
}