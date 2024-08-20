// Burning Tree
// GFG : Hard 20-08-2024


class Solution {
  public:
void inorder(Node* root, int parent, unordered_map<int, vector<int>>& adj) {
    if (!root) return;
    
    int child = root->data;
    if (parent != -1) {
        adj[parent].push_back(child);
        adj[child].push_back(parent);
    }
    
    inorder(root->left, child, adj);
    inorder(root->right, child, adj);
}
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        unordered_map<int,vector<int>> adj;
        inorder(root,-1,adj);
        queue<int> q;
        q.push(target);
        int mintime=0;
        unordered_set<int> visited;
        visited.insert(target);
        while(!q.empty())
        {
            bool flag=false;
            int size=q.size();
            for(int k=0;k<size;k++){
            int Node=q.front();
            q.pop();
            for(int i=0;i<adj[Node].size();i++)
            {
                if(!visited.count(adj[Node][i]))
                {
                    flag=true;
                    q.push(adj[Node][i]);
                    visited.insert(adj[Node][i]);
                }
            }
            }
            if(flag)mintime+=1;
        }
        return mintime;
        
    }
};
