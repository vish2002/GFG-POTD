// K-Pangrams
// GFG : Easy 26-07-2024

    bool kPangram(string str, int k) {
        // code here
        unordered_set<int> s;
        int count=0;
        for(int i=0;i<str.size();i++)
        {
            if(isalpha(str[i]))
            {
                s.insert(str[i]-'a');
                count++;
            }
        }
        if(count<26)return false;
        for(int i=0;i<26;i++)
        {
            auto it=s.find(i);
            if(it==s.end())
            {
                k--;
            }
        }
        if(k<0)return false;
        return true;
    }
