// Array to BST
// GFG : Easy 25-07-2024

Node* solve(int low,int high,vector<int> &nums)
    {
        if(low>high)return NULL;
        
        int mid=low + (high-low)/2;
        
        Node *root = new Node(nums[mid]);
        
        root->left=solve(low,mid-1,nums);
        root->right=solve(mid+1,high,nums);
        
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        int n=nums.size();
        return solve(0,n-1,nums);
    }
