// N-Queen Problem
// GFG : Hard 30-08-2024

int N;
vector<vector<int>> result;
unordered_set<int> column;
unordered_set<int> diag;
unordered_set<int> antidiag;
    void solve(int row,vector<int>& ans)
    {
        if(row>=N)
        {
            result.push_back(ans);
            return;
        }
        for(int col=0;col<N;col++)
        {
            int d=row+col;
            int ad=row-col;
            if(column.find(col)!=column.end() || diag.find(d)!=diag.end() || antidiag.find(ad)!=antidiag.end())
            continue;
            column.insert(col);
            diag.insert(d);
            antidiag.insert(ad);
            ans[row]=col+1;
            
            solve(row+1,ans);
            
            column.erase(col);
            diag.erase(d);
            antidiag.erase(ad);
            
        }
    }
    vector<vector<int>> nQueen(int n) {
        N=n;
        vector<int> ans(n);
        if(n==0)return {};
        solve(0,ans);
        return result;
        
    }
