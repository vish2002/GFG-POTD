// Ancestors in Binary Tree
// GFG : Medium 07-07-2024

void inorder(struct Node *root,int target,vector<int> &ancestor,bool &flag)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->data==target)
        {
            flag=true;
            return;
        }
        if(!flag)
        inorder(root->left,target,ancestor,flag);
        if(!flag)
        inorder(root->right,target,ancestor,flag);
        if(flag)
        {
            ancestor.push_back(root->data);
            return;
        }
        return;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ancestor;
        bool flag=false;
        inorder(root,target,ancestor,flag);
        return ancestor;
    }
