/*
Leetcode 74. Search a 2D Matrix
Approach 1: 
Space Complexity: O(1)
Time Complexity: O(n * m)
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (target == matrix[i][j])
                    return true;
            }
        }
        return false;
    }
};

/*
Leetcode 74. Search a 2D Matrix
Approach 1: 
Space Complexity: O(1)
Time Complexity: O (log * (n * m))
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int s = 0;
        int e = n * m - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            int row = mid / m;
            int col = mid % m;

            if (matrix[row][col] < target)
                s = mid + 1;
            else if (matrix[row][col] > target)
                e = mid - 1;
            else {
                return true;
            }
        }
        return false;
    }
};