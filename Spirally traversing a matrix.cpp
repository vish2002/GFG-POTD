// Spirally traversing a matrix
// GFG : Medium  01/08/2024

vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        vector<int> ans;
        int n= matrix.size();
        int m=matrix[0].size();
        int startrow=0;
        int startcol=0;
        int endrow=n-1;
        int endcol=m-1;
        while(startrow<=endrow && startcol<=endcol)
        {
            for(int j=startcol;j<=endcol;j++)
            {
                ans.push_back(matrix[startrow][j]);
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++)
            {
                ans.push_back(matrix[i][endcol]);
            }
            endcol--;
            if(startrow <=endrow){
            for(int j=endcol;j>=startcol;j--)
            {
                ans.push_back(matrix[endrow][j]);
            }
            endrow--;}
            if(startcol<=endcol)
            {
            for(int i=endrow;i>=startrow;i--)
            {
                ans.push_back(matrix[i][startcol]);
            }
            startcol++;
            }
        }
        return ans;
    }
