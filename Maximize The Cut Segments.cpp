//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
vector<vector<int>> dp;

int mincuts(int i, vector<int> &cuts, int n) {
    if (n == 0)
        return 0;
    
    if (i >= cuts.size() || n < 0)
        return INT_MIN; 
    
    if (dp[i][n] != -1)
        return dp[i][n];
    
    int take = 1 + mincuts(i, cuts, n - cuts[i]);
    int ntake = mincuts(i + 1, cuts, n);
    
    return dp[i][n] = max(take, ntake);
}

int maximizeTheCuts(int n, int x, int y, int z) {
    dp = vector<vector<int>>(4, vector<int>(n + 1, -1));
    vector<int> cuts = {x, y, z};
    int ans = mincuts(0, cuts, n);
    
    return max(0, ans); 
}

};
