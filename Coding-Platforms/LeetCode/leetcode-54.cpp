class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0;
        int down = m - 1;
        int left = 0;
        int right = n - 1;

        int dir = 0;

        // dir 0: left to right
        // dir 1: top to down
        // dir 2: right to left
        // dir 3: down to top

        vector<int> res;
        while (top <= down && left <= right) {

            // left to right
            if (dir == 0) {
                for (int i = left; i <= right; i++) {
                    res.push_back(matrix[top][i]);
                }
                top++;
            }

            // top to down
            if (dir == 1) {
                for (int i = top; i <= down; i++) {
                    res.push_back(matrix[i][right]);
                }
                right--;
            }

            // right to left
            if (dir == 2) {
                for (int i = right; i >= left; i--) {
                    res.push_back(matrix[down][i]);
                }
                down--;
            }

            // down to top
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