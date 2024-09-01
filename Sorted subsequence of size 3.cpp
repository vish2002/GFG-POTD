// Sorted subsequence of size 3
// GFG : Medium 31-08-2024

// Intuitive Approach 
vector<int> find3Numbers(vector<int> &arr) {
    int n = arr.size();
    if (n < 3) return {};
    
    int small = INT_MAX, middle = INT_MAX;
    vector<int> result;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] <= small) {
            small = arr[i];
        } else if (arr[i] <= middle) {
            middle = arr[i];
        } else {
            result = {small, middle, arr[i]};
            return result;
        }
    }
    
    return {};
}

// Recursive Approach 

    void solve(int i, vector<int> &arr, vector<int> &ans, bool &flag) {
        if (ans.size() == 3) {
            flag = true;
            return;
        }

        if (i >= arr.size() ) {
            return;
        }
        if (flag) return;

        if (ans.empty() || arr[i] > ans.back()) {
            ans.push_back(arr[i]);
            solve(i + 1, arr, ans, flag);
            if (flag) return;
            ans.pop_back();
        }

        solve(i + 1, arr, ans, flag);
    }

    vector<int> find3Numbers(vector<int> &arr) {
        vector<int> ans;
        bool flag = false;
        solve(0, arr, ans, flag);
        return ans;
    }
