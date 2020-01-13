 //https://www.interviewbit.com/problems/identical-binary-trees/
int isSameTree(treenode* A, treenode* B) {
  if(A==NULL && B==NULL)
  {
      return 1;
  }
  if(A==NULL || B==NULL)
  {
     return 0; 
  }
   else
   {
     if(A->val==B->val)
     {
         return (isSameTree(A->left,B->left) && isSameTree(A->right,B->right));
     }
   }
}
