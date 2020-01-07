//https://www.interviewbit.com/problems/least-common-ancestor/
int lca(treenode* root, int n1, int n2) {
    
    if (root == NULL)
    {
   
    return NULL; 
    }
    if (root->val > n1 && root->val > n2)
    {
   
        return lca(root->left, n1, n2);
    }
    if (root->val < n1 && root->val < n2) 
    {
     
        return lca(root->right, n1, n2); 
    }
  
    return root->val; 
}
