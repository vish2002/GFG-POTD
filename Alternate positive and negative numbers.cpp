// Alternate positive and negative numbers
// GFG : Easy 14-09-2024

class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int> p , n;
        for(auto it : arr){
            if(it >= 0) p.push_back(it);
            else n.push_back(it);
        }
        
        int i = 0 , j = 0;
        vector<int> ans;
       while (i < p.size() && j < n.size()) {
        ans.push_back(p[i++]);  
        ans.push_back(n[j++]);  
    }

    while (i < p.size()) {
        ans.push_back(p[i++]);
    }

    while (j < n.size()) {
        ans.push_back(n[j++]);
    }

    arr = ans;
    }
};
