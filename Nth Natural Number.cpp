// Nth Natural Number
// GFG : Medium 07-09-2024

long long findNth(long long n) {
        // code here
        long long ans=0, base=1;
        while(n) {
            ans += base*(n%9);
            base *= 10;
            n /= 9;
        }
        return ans;
    }
