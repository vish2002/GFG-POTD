// Summed Matrix
// GFG: Easy 24-06-2024

long long sumMatrix(long long n, long long q) {
        // code here
        if(q>2*n|| q==1)return 0;
        if(q<n)return (q-1)%n;
        else return n-(q-1)%n;
    }
