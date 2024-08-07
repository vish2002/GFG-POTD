// K-th element of two Arrays
// GFG : Medium 07-08-2024

int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int i=0;
        int j=0;
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<arr2[j])
            {
                k--;
                if(k==0)return arr1[i];
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                k--;
                if(k==0)return arr2[j];
                j++;
            }
            else
            {
                k--;
                if(k==0)return arr1[i];
                k--;
                if(k==0)return arr2[j];
                i++,j++;
            }
        }
        while(i<arr1.size())
        {
            k--;
            if(k==0)return arr1[i];
            i++;
        }
        while(j<arr2.size())
        {
            k--;
            if(k==0)return arr2[j];
            j++;
        }
        return -1;
    }
