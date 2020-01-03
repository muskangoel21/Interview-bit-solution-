//https://www.interviewbit.com/problems/inorder-traversal/
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> v;
    stack <TreeNode*> s;
    TreeNode* temp;
    while(A || !s.empty())
    {
        while(A)
        {
            s.push(A);
            A=A->left;
        }
        temp=s.top();
        s.pop();
        v.push_back(temp->val);
        A=temp->right;
    }
    return v;
}
