// Rat in a Maze Problem - I
// GFG : Medium 30-07-2024


bool isSafe(int x, int y, vector<vector<int>> &a, int n)
{
    if (x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 1)
        return true;
    else
        return false;
}
void solve(int x, int y, string sol, vector<string> &res,
           vector<vector<int>> &a, int n)
{
    if (x == n - 1 && y == n - 1)
    {
        res.push_back(sol);
        return;
    }
    if (!isSafe(x, y, a, n))
        return;
        a[x][y]=0;
    solve(x + 1, y, sol + "D", res, a, n);
    solve(x, y + 1, sol + "R", res, a, n);
    solve(x - 1,y,sol + "U", res, a, n);
    solve(x,y - 1,sol + "L", res, a, n);
    a[x][y]=1;
    return;
}

vector<string> findPath(vector<vector<int>> &a)
{
    int n=a.size();
    vector<string> res;
    string st = "";
    
    // Check if the start or end cell is not walkable
    if (a[0][0] == 0 || a[n-1][n-1] == 0)
    {
        res.push_back("-1");
        return res;
    }
    
    solve(0, 0, st, res, a, n);
    
    // If the res vector is empty, it means no path was found
    if (res.empty())
    {
        res.push_back("-1");
    }
    
    return res;
}
