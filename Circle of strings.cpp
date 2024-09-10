// Circle of strings
// GFG : Hard 10-09-2024

class Solution {
  public:
    void dfs(int Node,vector<int>adj[],vector<bool> &visited){
        visited[Node]=true;
        for(auto it:adj[Node]){
            if(!visited[it]){
                dfs(it,adj,visited);
            }
        }
    }
    int isCircle(vector<string> &arr) {
        // code here
        vector<int> adj[26];
        vector<int> indeg(26,0);
        vector<int> outdeg(26,0);
        
        for(int i=0;i<arr.size();i++){
            string temp=arr[i];
            int u=temp[0]-'a';
            int v=temp[temp.length()-1]-'a';
            adj[u].push_back(v);
            outdeg[u]++;
            indeg[v]++;
        }
        
        for(int i=0;i<26;i++){
            if(indeg[i]!=outdeg[i])return 0;
        }
        
        vector<bool> visited(26,0);
        dfs(arr[0][0]-'a',adj,visited);
        
        for(int i=0;i<26;i++){
            if(indeg[i] && !visited[i])
            return 0;
        }
        
        return 1;
        
    }
};
