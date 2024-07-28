// Remove Duplicates
// GFG: Easy 28-07-2024

// Approach 1 : Using Unordered_set 

    string removeDups(string str) {
        // Your code goes here
        string ans="";
        unordered_set<char> s;
        for(auto it:str)s.insert(it);
        for(auto it:str)
        {
            if(s.find(it)!=s.end())
            {
                ans+=it;
                s.erase(it);
            }
        }
        return ans;
    }
// Approach 2 : Using BitMasking 

    string removeDups(string str) {
        // Your code goes here
        int mask=0;
        int i=0;
        for(auto it:str)
        {
            if((mask>>(it-'a')&1))continue;
            mask|=1<<(it-'a');
            str[i++]=it;
        }
        return str.substr(0,i);
    }
