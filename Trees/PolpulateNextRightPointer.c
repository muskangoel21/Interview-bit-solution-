 //https://www.interviewbit.com/problems/populate-next-right-pointers-tree/
void Solution::connect(TreeLinkNode* root) {
        queue<TreeLinkNode *>q;
        q.push(root);
        q.push(NULL);
        while( q.size()>1)
        {
            TreeLinkNode* z=q.front();
                q.pop();
            if(z==NULL)
            {
                q.push(NULL);
            }
            else
            {
                if(z->left!=NULL)
                {
                   q.push(z->left);
                }
                if(z->right!=NULL)
                {
                    q.push(z->right);
                }
              if(q.front()!=NULL)
              {
                  z->next=q.front();
              }
              else
              {
                  z->next=NULL;
              }
            }
        }
}
