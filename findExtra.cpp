// Index of an Extra Element
// GFG: Easy 08-06-2024
// Using Two Pointer Approach 

int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int i=0;int j=0;
        while(i<n && j<n-1)
        {
            if(arr1[i]==arr2[j])
            {
                i++;
                j++;
            }
            else return i;
        }
    }
