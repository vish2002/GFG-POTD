// Minimum Cost of ropes
// GFG : Easy 11-09-2024

long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it: arr){
            pq.push(it);
        }
        long long ans=0;
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
        return ans;
    }
