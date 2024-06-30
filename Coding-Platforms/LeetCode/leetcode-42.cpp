class Solution {
private: 
    vector<int> getLeftMax(vector<int>&height, int n){
        vector<int> leftMax(n);
        leftMax[0] = height[0];

        for(int i=1; i<n; i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }
        return leftMax;
    }

    vector<int> getRightMax(vector<int>&height, int n){
        vector<int> rightMax(n);
        rightMax[n-1] = height[n-1];

        for(int i=n-2; i>=0; i--){
            rightMax[i] = max(rightMax[i+1], height[i]);
        }
        return rightMax;
    }

public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> leftmax = getLeftMax(height, n);
        vector<int> rightmax = getRightMax(height, n);

        int res = 0;

        for(int i=0; i<n; i++){
            res+= min(leftmax[i], rightmax[i]) - height[i];
        }
        return res;
    }
};