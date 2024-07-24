// Check for BST
// GFG : Easy 24-07-2024

bool check(Node *root,int mini,int maxi)
    {
        if(!root)return true;
        
        if (root->data<=mini || root->data>=maxi) return false;
        
        bool l=check(root->left,mini,root->data);
        bool r=check(root->right,root->data,maxi);
        
        if(!l || !r)return false;
        return true;
    }
    bool isBST(Node* root) {
        // Your code here
        return check(root,INT_MIN,INT_MAX);
    }
