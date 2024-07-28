// Form a palindrome
// GFG : Medium 28-07-2024

int lcs(string str1,string str2,int n,int m,vector<vector<int>> &dp)
    {
        if(n==0 || m==0)return dp[n][m]=0;
        if(dp[n][m]!=-1)return dp[n][m];
        if(str1[n-1]==str2[m-1])
        {
            return dp[n][m]=1+lcs(str1,str2,n-1,m-1,dp);
        }
        else return dp[n][m]=max(lcs(str1,str2,n-1,m,dp),lcs(str1,str2,n,m-1,dp));
    }
    int countMin(string str){
        string str2=str;
        reverse(str.begin(),str.end());
        int n=str.length();
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        int len=lcs(str,str2,n,n,dp);
        return n-len;
    }
