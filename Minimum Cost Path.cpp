// Minimum Cost Path
// GFG : Hard 02-09-2024

    std::vector<int> row_dir = {0, 0, -1, 1}; 
    std::vector<int> col_dir = {-1, 1, 0, 0}; 

    int minimumCostPath(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        std::priority_queue<std::pair<int, std::pair<int, int>>, 
                            std::vector<std::pair<int, std::pair<int, int>>>, 
                            std::greater<std::pair<int, std::pair<int, int>>>> pq;

        std::vector<std::vector<int>> dist(m, std::vector<int>(n, INT_MAX));

        pq.push({grid[0][0], {0, 0}});
        dist[0][0] = grid[0][0];

        while (!pq.empty()) {
            int cost = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();
            if (i == m - 1 && j == n - 1) {
                return cost;
            }
            for (int k = 0; k < 4; k++) {
                int newrow = i + row_dir[k];
                int newcol = j + col_dir[k];
                if (newrow >= 0 && newrow < m && newcol >= 0 && newcol < n) {
                    int newCost = cost + grid[newrow][newcol];
                    if (newCost < dist[newrow][newcol]) {
                        dist[newrow][newcol] = newCost;
                        pq.push({newCost, {newrow, newcol}});
                    }
                }
            }
        }

        return dist[m-1][n-1];
    }
