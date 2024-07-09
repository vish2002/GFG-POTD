// Closest Three Sum
// GFG : Medium 09-07-2024

int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(begin(arr),end(arr));
        int mindiff=INT_MAX;
        int maxi=INT_MIN;
        for(int k=0;k<arr.size()-2;k++)
        {
            int i=k+1;
            int j=arr.size()-1;
            while(i<j)
            {
                int sum=arr[k]+arr[i]+arr[j];
                int diff=abs(target-sum);
                if(sum == target)return target;
                  
                else if(diff<mindiff)
                {
                    mindiff=diff;
                    maxi=sum;
                }
                  
                else if(diff==mindiff)
                {
                    maxi=max(maxi,sum);
                }
              
                else if(sum <target)i++;
                else j--;
            }
        }
        return maxi;
    }
