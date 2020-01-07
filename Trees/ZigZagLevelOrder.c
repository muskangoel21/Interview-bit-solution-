 //https://www.interviewbit.com/problems/zigzag-level-order-traversal-bt/
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) { 
vector <vector<int>> v;
    // int i=0,j=0;
     if (!root) 
         return v; 
  vector<int> v1;
    stack<TreeNode*> currentlevel; 
    stack<TreeNode*> nextlevel; 
    currentlevel.push(root); 
    bool lefttoright = true; 
     while (!currentlevel.empty()) { 
        TreeNode* temp = currentlevel.top(); 
        currentlevel.pop();
        if (temp) { 
            // v[i][j++]=temp->val;  here is an error because memory does not assign
            v1.push_back(temp->val); //use vector for dynamic 
            if (lefttoright) { 
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right); 
            } 
            else { 
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            } 
        }
  
        if (currentlevel.empty()) { 
            v.push_back(v1);
            v1.clear(); //here vector is clear so that a new vector is empty
            // i++;
            // j=0;
            lefttoright = !lefttoright; 
            swap(currentlevel, nextlevel); 
        } 
    } 
    return v;
}