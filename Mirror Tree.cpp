// Mirror Tree
// GFG : Easy 13-09-2024

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void solve(Node* root)
    {
        if(!root) return;
        
        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        solve(root->left);
        solve(root->right);
    }
    void mirror(Node* node) {
        // code here
        solve(node);
    }
};
