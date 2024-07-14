// Segregate 0s and 1s
// GFG : Easy 14-07-2024

// Method 1 Using Hash Table
void segregate0and1(vector<int> &arr) {
        // code here
        vector<int> hash(2,0);
        for(int i=0;i<arr.size();i++)
        {
            hash[arr[i]]++;
        }
        int j=0;
        for(int i=0;i<2;i++)
        {
            while(hash[i]!=0 && j<arr.size())
            {
                arr[j++]=i;
                hash[i]--;
            }
        }
    }

// Method 2 using two pointer
void segregate0and1(vector<int> &arr) {
        // code here
        int a=0,b=arr.size()-1;
        while(a<b){
            if(arr[a]==1){
                swap(arr[a],arr[b]);
                b--;
            }
            else{
                a++;
            }
        }
    }
