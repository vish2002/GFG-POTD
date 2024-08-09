// Maximize Array Value After Rearrangement
// GFG : Easy 09-08-2024

int Maximize(vector<int> &arr) {
    int mod = 1e9 + 7;
    sort(begin(arr), end(arr));
    long long sum = 0; 
    for (int i = 0; i < arr.size(); i++) {
        sum = (sum + ((long long)arr[i]) * i) % mod) % mod;
    }
    return sum;
}
