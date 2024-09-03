// Minimum number of deletions and insertions.
// GFG : Medium 03-09-2024

int solve(string& s1,string& s2,int i,int j,vector<vector<int>>& dp){
	    if(i >= s1.size() || j >= s2.size()){
	        return 0;
	    }
	    if(dp[i][j] != -1){
	        return dp[i][j];
	    }
	    
	    int op1 = 0,op2 = 0,op3 = 0;
	    if(s1[i] == s2[j]){                                
	        op1 = 1+solve(s1,s2,i+1,j+1,dp);
	    }
	    else{                                              
	        op2 = solve(s1,s2,i+1,j,dp);
	        op3 = solve(s1,s2,i,j+1,dp);
	    }
	    
	    return dp[i][j] = max({op1,op2,op3}); 
	}
	int minOperations(string str1, string str2){
	    vector<vector<int>> dp(str1.size(),vector<int>(str2.size(),-1));
	    int sol = solve(str1,str2,0,0,dp);
	    
	    int del = str1.size()-sol;
	    int ins = str2.size()-sol;
	    
	    return del+ins;
	} 
