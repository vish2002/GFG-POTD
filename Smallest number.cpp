// Smallest number
// GFG : Medium - 15-07-2024

// Greedy Approach
string smallestNumber(int sum, int d) {
        // code here
        if(sum > (9*d)) return "-1";
        
        string ans(d,' ');
        for(int i=d-1;i>=0;i--)
        {
            if(sum > 9)
            {
                ans[i]='9';
                sum-=9;
            }
            else
            {
                if(i==0)
                {
                    ans[i]=sum+'0';
                }else
                {
                    ans[i]=(sum-1)+'0';
                    i--;
                    while(i>0)
                    {
                        ans[i]='0';
                        i--;
                    }
                    ans[i]='1';
                    break;
                }
            }
        }
        return ans;
    }


// Recursion Approach
string solve(string t, int idx, int s, int d) {
    if (idx >= d && s != 0) {
        return "-1";
    }
    
    if (idx == d && s == 0) {
        return t;
    }
    
    for (int i = 0; i <= 9; i++) {
        if (idx == 0 && i == 0) continue;
        if ((s - i) >= 0) {
            string temp = solve(t + to_string(i), idx + 1, s - i, d);
            if (temp != "-1") {
                return temp;
            }
        }
    }
    
    return "-1";
}

string smallestNumber(int s, int d) {
    string t = "";
    return solve(t, 0, s, d);
}


