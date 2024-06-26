// Coverage of all Zeros in a Binary Matrix
// GFG : Easy 26-06-2024

int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        std::vector<int> rowDir = {-1, 1, 0, 0};
        std::vector<int> colDir = {0, 0, -1, 1};
        int coverage=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                for(int k=0;k<4;k++)
                {
                    if(matrix[i][j]==0)
                    {
                       int newrow=i+rowDir[k];
                       int newcol=j+colDir[k];
                       if(newrow>=0 && newrow<matrix.size() && newcol >=0 && newcol<matrix[0].size() && matrix[newrow][newcol]==1)
                       coverage++;
                    }
                    else continue;
                }
            }
        }
        return coverage;
    }
