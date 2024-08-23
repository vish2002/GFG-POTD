// Left View of Binary Tree
// GFG : Easy 23-08-2024

void solve(Node *root,int level,vector<int> &ans,unordered_set<int> &visited)
{
    if(!root)return;
    
    if(!visited.count(level))
    {
        ans.push_back(root->data);
        visited.insert(level);
    }
    
    solve(root->left,level+1,ans,visited);
    solve(root->right,level+1,ans,visited);
}
vector<int> leftView(Node *root)
{
   // Your code here
   unordered_set<int> visited;
   vector<int> ans;
   solve(root,0,ans,visited);
   return ans;
}
