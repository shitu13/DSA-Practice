class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;

        if (root == NULL)
            return {};

        queue<TreeNode*> que;
        que.push(root);

        while (!que.empty()) {
            int n = que.size();
            TreeNode* node = NULL;

            while (n--) {
                node = que.front();
                que.pop();

                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }

            res.push_back(node->val);
        }

        return res;
    }
};