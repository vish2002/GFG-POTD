// Construct Binary Tree from Parent Array
// GFG : Medium  17-07-2024

Node *createTree(vector<int> parent) {
        // Your code here
        unordered_map<int,Node*> mp;
        int ind=-1;
        for(int i=0;i<parent.size();i++)
        {
            if(parent[i]==-1)
            {
                if(ind==-1)
                {
                    ind=i;
                }
                if (mp.find(i) == mp.end())
                mp[i]=new Node(i);
            }
            else
            {
                if(mp.find(parent[i])==mp.end())
                {
                    mp[parent[i]]=new Node(parent[i]);
                }
                if (mp.find(i) == mp.end()) {
                    mp[i] = new Node(i);
                }
                if(!mp[parent[i]]->left)
                {
                    mp[parent[i]]->left=mp[i];
                }
                else mp[parent[i]]->right=mp[i];
            }
        }
        return mp[ind];
    }
