 //https://www.interviewbit.com/problems/min-depth-of-binary-tree/
int Solution::minDepth(TreeNode* root) {
    if (root == NULL) 
        return 0;
    if (root->left == NULL && root->right == NULL) 
    return 1;
    if (!root->left) 
    return minDepth(root->right) + 1; 
    if (!root->right) 
    return minDepth(root->left) + 1; 
    return fmin(minDepth(root->left), minDepth(root->right)) + 1; 
} 
    