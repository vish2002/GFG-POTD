// Longest Common Substring
// GFG : Medium 14-08-2024

int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        int maxEl = *max_element(begin(nums), end(nums));
        vector<int> vec(maxEl + 1, 0);

        //All pairs
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int d = abs(nums[i] - nums[j]);
                vec[d]++;
            }
        }


        for (int d = 0; d <= maxEl; d++) {
            k -= vec[d];
            if (k <= 0) {
                return d; //returning kth smallest distance
            }
        }
        return -1;
    }
