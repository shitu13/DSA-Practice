// https://www.naukri.com/code360/problems/search-in-bst_1402878?leftPanelTabValue=PROBLEM

// Approach 1
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL)
        return false;
    if(root->data == x)
        return true;
    if(root->data > x)
        return searchInBST(root->left, x);
    else
        return searchInBST(root->right, x);
}

// Approach 2
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    BinaryTreeNode<int> *temp = root;

    while(temp!= NULL){
        if(temp->data == x)
            return true;
        if(temp->data > x)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return false;
}