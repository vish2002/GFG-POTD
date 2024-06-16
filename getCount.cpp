// Mobile numeric keypad
// GFG: Medium 15-06-2024
typedef long long ll;
int row_dir[5] = {0, -1, 1, 0, 0};  
int col_dir[5] = {0, 0, 0, -1, 1};

bool isValid(int i, int j) {
    if (i < 0 || i >= 4 || j < 0 || j >= 3 || (i == 3 && j == 0) || (i == 3 && j == 2))
        return false;
    return true;
}

ll solve(int i, int j, int length, int n, vector<vector<vector<ll>>>& memo) {
        if (i < 0 || i >= 4 || j < 0 || j >= 3 || (i == 3 && j == 0) || (i == 3 && j == 2))
        return 0;
        
    if (length == n)
        return 1;
    
    if (memo[i][j][length] != -1)
        return memo[i][j][length];
    
    ll count = 0;
    for (int k = 0; k < 5; k++) {
        int newrow = i + row_dir[k];
        int newcol = j + col_dir[k];
        if (isValid(newrow, newcol)) {
            count += solve(newrow, newcol, length + 1, n, memo);
        }
    }
    
    return memo[i][j][length] = count;
}

long long getCount(int n) {
    if (n == 1) return 10;
    
    ll totalCount = 0;
    vector<vector<vector<ll>>> memo(4, vector<vector<ll>>(3, vector<ll>(n + 1, -1)));
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (isValid(i, j)) {
                totalCount += solve(i, j, 1, n, memo);
            }
        }
    }
    
    return totalCount;
}
