// Padovan Sequence
// GFG : Easy 13-06-2024

// using vector

int padovanSequence(int n)
    {
        int mod=1e9+7;
       //code here
       vector<int> ans(n+1);
       ans[0]=1;
       ans[1]=1;
       ans[2]=1;
       for(int i=3;i<=n;i++)
       {
           ans[i]=(ans[i-2]%mod+ans[i-3]%mod)%mod;
       }
       return ans[n]%mod;
    }

// using pointer approach 

int padovanSequence(int n)
    {
        int mod=1e9+7;
       //code here
       if(n==0 || n==1 || n==2)
       {
           return 1;
       }
       int p0=1;
       int p1=1;
       int p2=1;
       int sum=0;
       int i=3;
       while(i<n+1)
       {
           sum=(p0%mod+p1%mod)%mod;
           p0=p1%mod;
           p1=p2%mod;
           p2=sum%mod;
           i++;
       }
       return sum % mod;
    }
