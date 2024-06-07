// Maximum occured integer
// GFG :  Medium 07-06-204
int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        int maxi=INT_MIN;
        vector<int> hash(maxx+2,0);
        for(int i=0;i<n;i++)
        {
            hash[l[i]]++;
            hash[r[i]+1]--;
        }
        for(int i=1;i<hash.size();i++)
        {
            hash[i]+=hash[i-1];
            maxi=max(maxi,hash[i]);
        }
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]==maxi)
            {
                return i;
            }
        }
        return 0;
    }
