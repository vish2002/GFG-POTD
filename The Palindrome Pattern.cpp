// The Palindrome Pattern
// GFG : Hard 28-06-2024

string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int l=0;
            int r=n-1;
            while(l<=r && arr[i][l]==arr[i][r])
            {
                l++;
                r--;
            }
            if(l>r)
            {
               return to_string(i)+" R";
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int l=0;
            int r=n-1;
            while(l<=r && arr[l][i]==arr[r][i])
            {
                l++;
                r--;
            }
            if(l>r)
            {
                return to_string(i)+" C";
            }
        }
        return "-1";
        
    }
