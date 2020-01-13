//https://www.interviewbit.com/problems/kth-smallest-element-in-tree/
int Solution::kthsmallest(TreeNode* A, int B) {
   TreeNode *temp;
    vector<int> v;
    stack <TreeNode *>s;
    int i=0;
    int z;
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
    //if you push all element in vector in increasing order then you have to just extract that element
//      for(i=0;i<=v.size()-B;i++)
//     {
//         z=v[i];
//     }
//   return z;
  return v[B-1];
}
