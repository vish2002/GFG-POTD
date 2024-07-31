// Longest Common Prefix of Strings
// GFG : Easy 31-07-2024

string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.size()==1)
        return arr[0];
        string LCP="";
        string temp="";
        temp=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            LCP="";
            int j=0;
            while(j<temp.size() && j<arr[i].size())
            {
                if(arr[i][j]==temp[j])
                {
                    LCP+=arr[i][j];
                    j++;
                }
                else break;
            }
            if(LCP=="")return "-1";
            temp=LCP;
        }
        return LCP;
    }
