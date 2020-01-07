 //https://www.interviewbit.com/problems/preorder-traversal/
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v;
    stack <TreeNode *>s;
    TreeNode *temp;
    while(A || !s.empty())
    {
        while(A)
        {
            s.push(A);
            v.push_back(A->val);
            A=A->left;
        }
        temp=s.top();
        s.pop();
        A=temp->right;
        
    }
    return v;
}
