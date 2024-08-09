// Maximize Array Value After Rearrangement
// GFG : Easy 09-08-2024

class Solution {
  public:
int Maximize(vector<int> &arr) {
    int mod = 1e9 + 7;
    sort(begin(arr), end(arr));
    long long sum = 0; // Use long long to prevent overflow
    for (int i = 0; i < arr.size(); i++) {
        sum = (sum + (static_cast<long long>(arr[i]) * i) % mod) % mod; // Ensure each multiplication is modded
    }
    return sum;
}

};
