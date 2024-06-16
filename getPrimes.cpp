// Prime Pair with Target Sum
// GFG : Medium 16-06-2024


vector<int> getPrimes(int n) {
        bool is_prime[n+1];
        memset(is_prime,true,sizeof(is_prime));
        is_prime[0]=is_prime[1]=false;
        for(int p=2;p*p<=n;p++){
            if(is_prime[p]){
                for(int i=p*p;i<=n;i +=p){
                    is_prime[i] = false;
                }
            }
        }
        for(int i=n;i>=n/2;i--){
            if(is_prime[i] and is_prime[n-i]) return {n-i,i};
        }
        return {-1,-1};
    }
