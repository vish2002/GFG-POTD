// Construct list using given q XOR queries
// Optimised Approach 
// 02-06-2024 Medium

vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> ans;
        int n=queries.size();
        int totalxor=0;
        for(int i=n-1;i>=0;i--)
        {
            int u=queries[i][0];
            int v=queries[i][1];
            if(u==1)
            {
                totalxor^=v;
            }
            else
            {
                ans.push_back(totalxor^v);
            }
        }
        ans.push_back(totalxor^0);
        sort(ans.begin(),ans.end());
        return ans;
    }
