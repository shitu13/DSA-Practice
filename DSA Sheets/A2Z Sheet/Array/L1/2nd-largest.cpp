// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        
    int f_max = INT_MIN, s_max = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > f_max){
            s_max = f_max;
            f_max = arr[i];
        }else if(arr[i]>s_max && arr[i]<f_max){
            s_max = arr[i];
        }
    }
    
    return s_max;
    }
};
