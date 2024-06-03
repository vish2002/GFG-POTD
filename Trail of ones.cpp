// Trail of ones
// GFG:Easy 03-06-2024

// Recursion + Memoization 


int m=1e9+7;
    int solve(int i,int n,bool prev,bool istaken,vector<vector<vector<int>>> &dp)
    {
        if(i==n)
        {
            if(istaken)return 1;
            else return 0;
        }
        
        if(dp[i][prev][istaken]!=-1)
        {
            return dp[i][prev][istaken];
        }
        
        int take,ntake=0;
        ntake=solve(i+1,n,0,istaken,dp)%m;
        if(prev)
        {
            take=solve(i+1,n,1,1,dp)%m;
        }
        else take=solve(i+1,n,1,istaken,dp)%m;
        return dp[i][prev][istaken]=(take+ntake)%m;
    }


// using Fibonacci series Approach 
// intution:The the number of substrings containing consecutive ones can be found by substracting the number of substrings not containing consecutive ones from the total number of substrings.
// and the total number of such strings could be found using fibonacci series.

    int numberOfConsecutiveOnes(int n) {
        // code here
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return solve(0,n,0,0,dp)%m;
    }


    int numberOfConsecutiveOnes(int n) {
        // code here
        int mod=1e9+7;
        int pow=1;
        int a=1,b=1,c=0;
        for(int i=0;i<n;i++)
        {
            c=(a%mod+b%mod)%mod;
            a=b%mod;
            b=c%mod;
            pow=(pow*2)%mod;
        }
        return (pow%mod-c+mod)%mod;
    }
