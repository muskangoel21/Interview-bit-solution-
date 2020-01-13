 //https://www.interviewbit.com/problems/symmetric-binary-tree/
int isSymmetric(treenode* A) {
    int z=isIdentical(A,A);
    return z;
}
int isIdentical(treenode *A,treenode *B)
{
    if(A==NULL && B==NULL)
    {
        return 1;
    }
    if(A!=NULL && B!=NULL)
    {
        return (A->val==B->val && isIdentical(A->left,B->right) && isIdentical(A->right,B->left));
        
    }
    return 0;
}
