// Count numbers containing 4
// GFG: Easy 10-06-2024

// using Recursion+iteration 
  bool four(int num)
  {
      if(num == 0)return false;
      int rem=num%10;
      if(rem == 4)return true;
      four(num / 10);
  }
    int countNumberswith4(int n) {
        // code here
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(four(i))
            count++;
        }
        return count;
    }


//  Using String 

int countNumbersWith4(int n) {
    // code here
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (to_string(i).find("4") != string::npos)
            c++;
    }
    return c;
}


