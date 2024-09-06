// Kadane's Algorithm
// GFG : Medium 06-09-2024

class Solution {
  public:

    long long maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        long long currsum=0;
        long long  maxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            currsum+=arr[i];
            if(maxsum<currsum)maxsum=currsum;
            if(currsum<0)currsum =0;
        }
        return maxsum;
    }
};
