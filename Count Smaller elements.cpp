// Count Smaller elements
// GFG : Hard 19-07-2024

// Using Binary Search 
vector<int> constructLowerArray(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n);
        int k = n - 2;
        vector<int> arr;
        arr.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            int idx = binaryS(arr, a[i], 0, arr.size() - 1);
            ans[k--] = idx;
            arr.insert(arr.begin() + idx, a[i]);
        }
        return ans;
    }

    int binaryS(vector<int>& arr, int key, int l, int h) {
        if (l <= h) {
            int mid = (l+h) / 2;
            if (arr[mid] >= key) {
                return binaryS(arr, key, l, mid - 1);
            }
            else return binaryS(arr, key, mid + 1, h);
        }
        return l;
    }


// Using Lower Bound (lower bound returns the iterator pointing to the index an element can be placed in the array maintaining its sorted order 
// for eg: i want to cheack lower bound of 2 in array {1,3,4}; it will give me the iterator pointing to the position between 1 and 3, then i need to substract teh begin(arr) to get the proper index

vector<int> constructLowerArray(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n);
        int k = n - 2;
        vector<int> arr;
        arr.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            int idx = binaryS(arr, a[i], 0, arr.size() - 1);
            ans[k--] = idx;
            arr.insert(arr.begin() + idx, a[i]);
        }
        return ans;
    }
