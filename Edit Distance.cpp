// Edit Distance
// GFG : Hard 02-08-2024

int solve(int i,int j,string &str1,string &str2,vector<vector<int>> &dp){
        if(i>=str1.length())
        {
            return str2.length()-j;
        }
        
        if(j>=str2.length())
        {
            return str1.length()-i;
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(str1[i]==str2[j])
        {
            return solve(i+1,j+1,str1,str2,dp);
        }
        int insert=1+solve(i,j+1,str1,str2,dp);
        int delet=1+solve(i+1,j,str1,str2,dp);
        int replace=1+solve(i+1,j+1,str1,str2,dp);
        
        return dp[i][j]=min({insert,delet,replace});
    }
    int editDistance(string str1, string str2) {
        // Code here
        int m=str1.length();
        int n=str2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(0,0,str1,str2,dp);
    }
