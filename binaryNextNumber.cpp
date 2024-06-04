// Binary representation of next number
// GFG:Easy 04-06-2024

string binaryNextNumber(string s) {
        // code here.
        int n=s.length();
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                s[i]='0';
            }
            else if(s[i]=='0' )
            {
                s[i]='1';
                break;
            }
        }
        if(i==-1)
        {
            s.insert(s.begin(),'1');
        }
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='1') flag++;
            else break;
        }
        s.erase(0,flag);
        return s;
    }
