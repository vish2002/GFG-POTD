// Minimum Jumps
// GFG : Medium 08-09-2024
class Solution{
  public:
    int minJumps(vector<int> &arr){
        // Your code here
        int n=arr.size();
        int jumps=0,maxrange=0,maxi=0;
        if(n<=1)return 0;
        if(arr[0]==0)return -1;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,i+arr[i]);
            if(i==maxrange)
            {
                maxrange=maxi;
                jumps++;
                if(maxrange>=n-1)return jumps;
            }
        }
        return -1;
    }
};
