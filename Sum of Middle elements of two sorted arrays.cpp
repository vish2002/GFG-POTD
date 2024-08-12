// Sum of Middle elements of two sorted arrays
// GFG : Medium 12-08-2024

class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int i=0;
        int j=0;
        int size=arr1.size()+arr2.size();
        size/=2;
        size+=1;
        int ans=0;
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<arr2[j])
            {
                size--;
                if(size ==1 )ans+=arr1[i];
                if(size == 0){ans+=arr1[i];return ans;}
                i++;
            }
            if(arr2[j]<arr1[i])
            {
                size--;
                if(size ==1)ans+=arr2[j];
                if(size == 0){ans+=arr2[j];return ans;}
                j++;
            }
            if(arr1[i]==arr2[j])
            {
                size--;
                if(size ==1 )ans+=arr1[i];
                if(size == 0){ans+=arr1[i];return ans;}
                i++;
                size--;
                if(size ==1)ans+=arr2[j];
                if(size == 0){ans+=arr2[j];return ans;}
                j++;
            }
        }
        while(i<arr1.size())
        {
            size--;
            if(size ==1 )ans+=arr1[i];
            if(size == 0){ans+=arr1[i];return ans;}
            i++;
        }
        while(j<arr2.size())
        {
            size--;
            if(size ==1)ans+=arr2[j];
            if(size == 0){ans+=arr2[j];return ans;}
            j++;
        }
        return 0;
    }
};
