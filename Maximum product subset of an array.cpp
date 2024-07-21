// Maximum product subset of an array
// GFG : Medium 21-07-2024

long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        int mod=1e9+7;
        int negcount=0;
        int n=arr.size();
        long long product=1;
        int zero=0;
        int maxi=INT_MIN;
        long long x=-1;;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                if(!flag)
                {
                    flag=true;
                    x=1;
                }
                if(flag){
                    x=(x%mod*arr[i]%mod)%mod;
                }
            }
            if(arr[i]!=0)
            {
                product=((product%mod) * (arr[i]%mod))%mod;
                if(arr[i]<0)
                {
                maxi=max(maxi,arr[i]);
                negcount++;
                }
            }
            else zero++;
        }
        if(product < 0 && n==1 )return product%mod;
        if(n==zero)return 0;
        else if(product<0 && negcount!=1)return (long long)(product/maxi);
        if(negcount == 1 && product<0)
        {
            if(!flag && zero>0)
            {
                return 0;
            }
            else return x;
        }
        return product%mod;
    }
