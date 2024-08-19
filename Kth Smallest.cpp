// Kth Smallest
// GFG : Medium 19-08-2024

class Solution{
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>> pq;
        for(auto num: arr)
        {
            pq.push(num);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};
