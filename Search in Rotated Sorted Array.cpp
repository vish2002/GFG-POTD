// Search in Rotated Sorted Array
// GFG :Medium 08-07-2024
  int search(vector<int>& arr, int key) {
        // complete the function here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==key)return i;
        }
        return -1;
    }
