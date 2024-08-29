// Sorting Elements of an Array by Frequency
// GFG : Medium 28-08-2024

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(auto i : arr) freq[i]++;
        
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if(freq[a] > freq[b]) return true;
            if(freq[a] == freq[b]) return a < b;
            return false;
        });
        return arr;
    }
};
