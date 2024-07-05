// Vertical Width of a Binary Tree
// GFG : Medium 05-07-2024

    int maxi=INT_MIN;
    int mini=INT_MAX;
    void inorder(Node* root,int distance)
    {
        if(root==NULL)
        {
            maxi=max(maxi,distance-1);
            mini=min(mini,distance+1);
            return;
        }
        inorder(root->left,distance+1);
        inorder(root->right,distance-1);
    }
    
    int verticalWidth(Node* root) {
        // code here
        if(root == NULL )return 0;
        
        inorder(root,0);
        return maxi+abs(mini)+1;
    }
