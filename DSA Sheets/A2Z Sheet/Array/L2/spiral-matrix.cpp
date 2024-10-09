class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int top = 0;
        int left = 0;
        int right = col - 1;
        int down = row - 1;

        int dir = 0;

        // dir 0: left to right
        // dir 1: top to down
        // dir 2: right to left
        // dir 3: down to top

        vector<int> res;

        while (top <= down && left <= right) {
            // constant is the row, column is moving. moves LEFT to RIGHT
            if (dir == 0) {
                for (int i = left; i <= right; i++) {
                    res.push_back(matrix[top][i]);
                }
                top++;
            }
            // constant is column, row is moving. moves TOP to DOWN
            if (dir == 1) {
                for (int i = top; i <= down; i++) {
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            // constant is row, column is moving. moves RIGHT to LEFT
            if (dir == 2) {
                for (int i = right; i >= left; i--) {
                    res.push_back(matrix[down][i]);
                }
                down--;
            }
            // constant is column, row is moving. moves DOWN to TOP
            if (dir == 3) {
                for (int i = down; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return res;
    }
};
