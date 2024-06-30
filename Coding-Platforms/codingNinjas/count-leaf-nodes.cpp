// https://www.naukri.com/code360/problems/count-leaf-nodes_893055?leftPanelTabValue=PROBLEM

void inOrder(BinaryTreeNode<int>* root, int& count){
    //base case
    if(root == NULL)
        return;

    inOrder(root-> left, count);
    
    //count leaf node
    if(root->left == NULL && root->right == NULL)
            count++;
    
    
    inOrder(root -> right, count);
    
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.

    int cnt =0;
    inOrder(root, cnt);

    return cnt;
}