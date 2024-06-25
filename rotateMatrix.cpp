// Left Rotate Matrix K times
// GFG : Medium 25-06-2024

vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,vector<int> (m));
        k=k%m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int newcol=(j-k+m)%m;
                ans[i][newcol]=mat[i][j];
            }
        }
        return ans;
    }
