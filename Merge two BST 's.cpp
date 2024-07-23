// Merge two BST 's
// GFG : Medium 23-07-2024

void inorder(Node *root,vector<int> &temp)
    {
        if(!root)return;
        inorder(root->left,temp);
        temp.push_back(root->data);
        inorder(root->right,temp);
        return;
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> first;
        vector<int> second;
        inorder(root1,first);
        inorder(root2,second);
        
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<first.size() && j<second.size())
        {
            if(first[i]<second[j])
            {
                ans.push_back(first[i]);
                i++;
            }
            else if(first[i]>second[j])
            {
                ans.push_back(second[j]);
                j++;
            }
            else if(first[i]==second[j])
            {
                ans.push_back(first[i]);
                ans.push_back(second[j]);
                i++,j++;
            }
        }
        while(i<first.size())
        {
            ans.push_back(first[i]);
            i++;
        }
        while(j<second.size())
        {
            ans.push_back(second[j]);
            j++;
        }
        return ans;
    }
