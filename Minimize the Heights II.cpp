// Minimize the Heights II
// GFG : Medium 17-09-2024

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=arr[n-1]-arr[0];
        int lowest=arr[0]+k,largest=arr[n-1]-k;
        for(int i=0;i<n-1;i++)
        {
            int mini=min(lowest,arr[i+1]-k);
            int maxi=max(largest,arr[i]+k);
            if(mini<0)continue;
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};
