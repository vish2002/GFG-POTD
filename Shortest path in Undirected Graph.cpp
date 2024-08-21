// Shortest path in Undirected Graph
// GFG : Medium 21-08-2024
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
         vector<int> adj[n];
        for(int i=0;i<m;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        vector<int> dist(n,-1);
        vector<bool> visited(n,0);
        q.push(src);
        visited[src]=1;
        dist[src]=0;
        while(!q.empty())
        {
            int Node=q.front();
            q.pop();
            for(int i=0;i<adj[Node].size();i++)
            {
                if(visited[adj[Node][i]])
                continue;
                
                visited[adj[Node][i]]=1;
                dist[adj[Node][i]]=dist[Node]+1;
                q.push(adj[Node][i]);
            }
        }
        return dist;
    }
};
