// N meetings in one room
// GFG : Easy 04-08-2024

int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back({end[i],start[i]});
        }
        sort(temp.begin(),temp.end());
        int ans=0;
        int e=-1;
        for(int i=0;i<n;i++)
        {
            if(temp[i].second>e)
            {
                ans++;
                e=temp[i].first;
            }
        }
        return ans;
    }
