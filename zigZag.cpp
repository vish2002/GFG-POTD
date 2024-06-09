// Convert array into Zig-Zag fashion
// GFG: Easy 09-06-2024

void zigZag(int n, vector<int> &arr) {
        // code here
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                if(arr[i]>=arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            else {
                if(arr[i]<arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
    }
