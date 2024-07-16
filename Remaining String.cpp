// Remaining String
// GFG : Easy 16-07-2024

string printString(string s, char ch, int count) {
        // Your code goes here
        for(int i=0;i<s.length();i++)
        {
            if(count == 0)
            {
                return s.substr(i);
            }
            if(s[i]==ch)
            {
                count--;
            }
        }
        return "";
    }
