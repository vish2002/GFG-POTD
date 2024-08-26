// Wildcard Pattern Matching
// GFG : Hard 26-08-2024

class Solution {
  public:
int solve(int i, int j, string pattern, string str, vector<vector<int>>& dp) {
    if (j >= str.length() && i >= pattern.length()) 
        return 1;
    if (i >= pattern.length()) 
        return 0;
    if (dp[i][j] != -1) 
        return dp[i][j];

    if (pattern[i] == '*') {
        dp[i][j] = solve(i + 1, j, pattern, str, dp) || (j < str.length() && solve(i, j + 1, pattern, str, dp));
    } 
    else if (j < str.length() && (pattern[i] == '?' || pattern[i] == str[j])) {
        dp[i][j] = solve(i + 1, j + 1, pattern, str, dp);
    } 
    else {
        dp[i][j] = 0;
    }

    return dp[i][j];
}

int wildCard(string pattern, string str) {
    int maxi=max(pattern.length(),str.length());
    vector<vector<int>> dp(maxi+1, vector<int>(maxi+1, -1));
    return solve(0, 0, pattern, str, dp);
}

};
