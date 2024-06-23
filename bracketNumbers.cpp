// Print Bracket Number
// GFG : Easy 23-06-2024

vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector<int> ans;
        stack<pair<char,int>> s;
        int ocount=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
            {
                ocount++;
                s.push({'(',ocount});
                ans.push_back(ocount);
            }
            if(str[i]==')')
            {
                while(!s.empty() && s.top().first!='(')
                {
                    s.pop();
                }
                if(!s.empty())
                {
                ans.push_back(s.top().second);
                s.pop();
                }
            }
        }
        return ans;
    }
