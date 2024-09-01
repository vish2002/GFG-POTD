// Max sum path in two arrays
// GFG : Medium 01-09-2024

int maxPathSum(vector<int> &arr1, vector<int> &arr2)
{
    int m = arr1.size();
    int n = arr2.size();
    int ans = 0, s1 = 0, s2 = 0;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans += max(s1, s2) + arr1[i];
            i++;
            j++;
            s1 = 0;
            s2 = 0;
        }
        else if (arr1[i] < arr2[j])
        {
            s1 += arr1[i++];
        }
        else
        {
            s2 += arr2[j++];
        }
    }
    while (i < m)
    {
        s1 += arr1[i++];
    }
    while (j < n)
    {
        s2 += arr2[j++];
    }
    ans += max(s1, s2);
    return ans;
}
