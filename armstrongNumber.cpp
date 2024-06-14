// Armstrong Numbers
// GFG : Easy 14-06-2024

// In cpp log10(n)+1 gives the number of digits present in that number.
// This solution can also be used for numbers having more than 3 digits also.So it is a scalable solution.

string armstrongNumber(int n) {
        // code here
        int temp=n;
        int digits=log10(n)+1;
        int sum=0;
        for(int i=0;i<digits;i++)
        {
            int x=n%10;
            n=n/10;
            sum+=pow(x,digits);
        }
        if(sum==temp)return "true";
        else return "false";
    }
