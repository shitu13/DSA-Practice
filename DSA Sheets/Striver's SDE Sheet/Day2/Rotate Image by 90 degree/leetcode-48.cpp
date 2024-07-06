/*
Leetcode 48. Rotate Image
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(n * n)
*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = row;

        for (int i = 0; i < row; i++) {
            for (int j = i; j < col; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < row; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};