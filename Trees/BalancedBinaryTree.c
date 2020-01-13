//https://www.interviewbit.com/problems/balanced-binary-tree/
int isBalanced(treenode* A) {
     if(A==NULL)
    return 1;
    int lh=height(A->left);
    int rh=height(A->right);
   
    if(abs(lh-rh)<=1 && isBalanced(A->left) && isBalanced(A->right))
    {
        return 1;
    }
    return 0;
    
}
int height(treenode *A)
{
    if(A==NULL)
    return 0;
    else
    return 1+fmax(height(A->left),height(A->right));
}
