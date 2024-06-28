// Toeplitz matrix
// GFG : Medium 27-06-2024

bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int n=mat.size();
    int m=mat[0].size();
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(mat[i-1][j-1]!=mat[i][j])return false;
        }
    }
    return true;
}
