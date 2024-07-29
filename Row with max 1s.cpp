// Row with max 1s
// GFG : Medium 29-07-2024

int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int i=0,j=m-1;
        int maxrow=-1;
        while(i<n && j>=0)
        {
            while(j>=0 && arr[i][j]==1)
            {
                j--;
                maxrow=i;
            }
            if(j<0)return maxrow;
            i++;
        }
        return maxrow;
    }
