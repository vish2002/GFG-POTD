  // Validate an IP Address
  // GFG : Medium 06-08-2024

int isValid(string str) {
        // code here
        string temp="";
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='.')
            {
                count++;
                if(temp=="")
                {
                    return 0;
                }
                if(temp[0]=='0' && temp.length()>1)return 0;
                else if(stoi(temp)>255)return 0;
                else if(count>3)return 0;
                temp="";
            }
            else temp+=str[i];
        }
        if(stoi(temp)>255)return 0;
        if(count < 3)return 0;
        return 1;
    }
