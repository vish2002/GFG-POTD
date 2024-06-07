// Max sum in the configuration
// GFG:Medium 07-06-2024

long max_sum(int arr[], int n) {
    long sum = 0;
    long prev_sum = 0;

    for (int i = 0; i < n; i++) {
        prev_sum += (long)i * arr[i];
        sum += arr[i];
    }

    long ans = prev_sum;

    for (int i = 1; i < n; i++) {
        long curr_sum = prev_sum - (sum - arr[i - 1]) + (long)arr[i - 1] * (n - 1);
        prev_sum = curr_sum;

        if (curr_sum > ans) {
            ans = curr_sum;
        }
    }

    return ans;
}
