// Missing in Array
// GFG : Easy 05-09-2024

class Solution {
  public:
int missingNumber(int n, vector<int>& arr) {
        
        int ans=n;
        for(int i=0; i<n-1; i++)
        {
            ans+=(i+1-arr[i]);
        }
        return ans;
        
    }
};
