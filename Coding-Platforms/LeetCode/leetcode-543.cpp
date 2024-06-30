/// Diameter of Binary Tree - LEETCODE 543

              /************************************************************************************/
             // >>>>>>>>>>>>>>> Diameter of Binary Tree        <<<<<<<<<<<<<<    LEETCODE 543  /////

            // Complexity O(n^2)

class Solution {
private:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int left = maxDepth(root -> left);
        int right = maxDepth(root-> right);

        int maxLen = max(left, right) + 1;

        return maxLen;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = maxDepth(root -> left) + maxDepth(root -> right);

        return max(op1, max(op2, op3));
    }
};

// Complexity O(n)

class Solution {
private:
    pair <int, int> diameterOfBinaryTreeFast(TreeNode* root) {
        if (root == NULL){
            pair<int, int> p = make_pair(0, 0);
            return p;
        }
        
        pair<int, int> left = diameterOfBinaryTreeFast(root -> left);
        pair<int, int> right = diameterOfBinaryTreeFast(root -> right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second+1;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second)+1;

        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameterOfBinaryTreeFast(root).first-1;
    }
};