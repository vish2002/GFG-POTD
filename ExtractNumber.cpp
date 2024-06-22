// Extract the Number from the String
// GFG : Easy 22-06-2024

// Basic string operations
long long stringtonum(string s)
    {
        long long num=0;
        for(int i=0;i<s.length();i++)
        {
            int x=s[i]-'0';
            if(x==9)return -1;
            num=num*10+x;
        }
        return num;
    }
    long long ExtractNumber(string sentence) {

        // code here
        string temp="";
        long long maxi=-1;
        for(int i=0;i<sentence.length();i++)
        {
            char c=sentence[i];
            if(isdigit(c))
            {
                temp+=c;
            }
            
            if(!isdigit(c) || i==sentence.length()-1)
            {
                if(temp.length()!=0)
                {
                   long long x=stringtonum(temp); 
                   if(x>maxi)
                    {
                       maxi=x;
                    }
                }
                temp="";
            }    
        }
        return maxi;
    }
