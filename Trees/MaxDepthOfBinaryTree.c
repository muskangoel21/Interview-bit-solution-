   //https://www.interviewbit.com/problems/max-depth-of-binary-tree/
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
    {
        return 0;
    }
    else
    {
        return 1+fmax(maxDepth(A->left),maxDepth(A->right));
    }
}