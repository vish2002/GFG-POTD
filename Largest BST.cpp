// Largest BST
// GFG : Medium 22-07-2024

// PostOrder Traversal
vector<int> solve(Node *root)
    {
        // {size,TF,mini,maxi}
        if(!root)
        {
            return {0,1,INT_MAX,INT_MIN};
        }
        else if(!root->left && !root->right)
        {
            return{1,1,root->data,root->data};
        }
        vector<int> left=solve(root->left);
        vector<int> right=solve(root->right);
        
        int leftsize=left[0],leftTF=left[1],leftmini=left[2],leftmaxi=left[3];
        int rightsize=right[0],rightTF=right[1],rightmini=right[2],rightmaxi=right[3];
        
        if(leftTF==1 && rightTF==1 && leftmaxi<root->data && rightmini>root->data)
        {
            return{1+leftsize+rightsize,1,min(root->data,leftmini),max(root->data,rightmaxi)};
        }
        else return{max(leftsize,rightsize),0,0,0};
    }
    int largestBst(Node *root)
    {
    	//Your code here
    	return solve(root)[0];
    }
