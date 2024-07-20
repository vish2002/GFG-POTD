// Remove Half Nodes
// GFG : Easy 20-07-2024

/* Happy Birthday to me */

// Using stack
Node* solve(Node *root,stack<Node*> &q)
    {
        if(!root)return NULL;
        
        Node* temp = NULL;
        if(root->left && root->right || !root->left && !root->right)
        {
            temp = new Node(root->data);
            q.push(temp);
        }
        
        if(!temp)
        {
            if(root->left)
            {
                return solve(root->left,q);
            }
            else return solve(root->right,q);
        }
        else
        {
            temp->left=solve(root->left,q);
            temp->right=solve(root->right,q);
            
            Node*t=q.top();
            q.pop();
            return t;
        }
    }
    Node *RemoveHalfNodes(Node *root) {
        // code here
        stack<Node*>q;
        return solve(root,q);
    }


// Without using stack 

Node *solve(Node *root)
    {
        if(!root)return NULL;
        
        root->left=solve(root->left);
        root->right=solve(root->right);
        
        if(root->left && root->right || !root->left && !root->right)
        {
            return root;
        }
        else if(root->left)return root->left;
        else return root->right;
    }
    
    Node *RemoveHalfNodes(Node *root) {
        // code here
        return solve(root);
    }
