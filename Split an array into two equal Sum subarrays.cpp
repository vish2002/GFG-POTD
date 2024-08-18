// Split an array into two equal Sum subarrays
// GFG : Easy 18-08-2024

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        int leftsum=0;
        for(int i=0;i<arr.size();i++)
        {
            leftsum+=arr[i];
            if((sum-leftsum)==leftsum)return true;
        }
        return false;
    }
};
