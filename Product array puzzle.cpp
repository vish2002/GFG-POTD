// Product array puzzle
// GFG : Easy 17-08-2024


class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        long long nzeroproduct=1;
        int zerocount=0;
        for(auto &it:nums)
        {
            if(it != 0)nzeroproduct*=it;
            if(it == 0)zerocount++;
        }
        for(auto &it:nums)
        {
            if(zerocount > 1)
            it=0;
            
            else if(zerocount  == 1)
            {
                if(it == 0)
                it=nzeroproduct;
                else it=0;
            }
            
            else if(zerocount == 0)
            {
                it=nzeroproduct/it;
            }
        }
        return nums;
    }
};
