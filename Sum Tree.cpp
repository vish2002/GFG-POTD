// Sum Tree
// GFG : Medium 08-08-2024


/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    int solve(Node *root,bool &flag)
    {
        if(!root)
        {
            return 0;
        }
        int val=root->data;
        
        int left=solve(root->left,flag);
        int right=solve(root->right,flag);
        
        if(!left && !right)return root->data;
        
        if(val != left+right)flag=false;
        return left+right + root->data;
    }
    bool isSumTree(Node* root) {
        // Your code here
        bool flag=true;
        solve(root,flag);
        return flag;
    }
};
