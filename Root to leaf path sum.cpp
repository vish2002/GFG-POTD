// Root to leaf path sum
// GFG : Easy 12-07-2024


void solve(Node *root,int sum,int k,bool &found){
        
       if(root==NULL)
        return; 
        
        sum+=root->data;
        
        if(root->left==NULL && root->right==NULL && sum==k)
        found=true;
        
        solve(root->left,sum,k,found);
        solve(root->right,sum,k,found);
        
    }
    
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        bool found=false;
        solve(root,0,target,found);
        
        return found;
    }
