// Shortest Path in Weighted undirected graph
// GFG : Medium 13-07-2024


vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        int V=n;
        vector<pair<int,int>>adj[n+1];
        for(vector<int> it:edges)
        {
            int u=it[0];
            int v=it[1];
            int weight=it[2];
            adj[u].push_back(make_pair(v,weight));
            adj[v].push_back(make_pair(u,weight));
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        vector<int> distance(n+1,INT_MAX);
        vector<int> parent(n+1,-1);
        vector<bool> visited(n+1,false);
        q.push(make_pair(0,1));
        distance[1]=0;
        while(!q.empty())
        {
            int Node=q.top().second;
            q.pop();
            
            if(visited[Node])
            {
                continue;
            }
            
            visited[Node]=true;
            for(pair<int,int> it:adj[Node])
            {
                int neighbour=it.first;
                int dist=it.second;
                if(!visited[neighbour])
                {
                    if(distance[neighbour]>distance[Node]+dist)
                    {
                        distance[neighbour]=distance[Node]+dist;
                        q.push(make_pair(distance[neighbour],neighbour));
                        parent[neighbour]=Node;
                    }
                }
            }
        }
        vector<int> path;
        if(parent[V]==-1)
        {
            path.push_back(-1);
            return path;
        }
        int dest=V;
        while(dest!=-1)
        {
            path.push_back(dest);
            dest=parent[dest];
        }
        path.push_back(distance[V]);
        reverse(path.begin(),path.end());
        return path;
    }
