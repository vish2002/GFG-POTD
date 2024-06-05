// Swapping pairs make sum equal
// GFG: Medium 05-06-2024


// Using two pointer approach + Sorting 
// TC : o(nlogn + mlogm)
int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+m);
        
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        for(int j=0;j<m;j++)
        {
            sum2+=b[j];
        }
        if(sum1==sum2)
        {
            return 1;
        }
        int temp1=sum1;
        int temp2=sum2;
        int i=0,j=0;
        while(i<n && j<m && temp1<temp2)
        {
            if(a[i]<b[j])
            {
                temp1=sum1-a[i]+b[j];
                temp2=sum2-b[j]+a[i];
                j++;
            }
            if(temp1==temp2)
            {
                return 1;
            }
            else if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else if(b[j]<a[i])
            {
                i++;
            }
        }
        while(i<n && j<m && temp2<temp1)
        {
            if(a[i]>b[j])
            {
                temp1=sum1-a[i]+b[j];
                temp2=sum2-b[j]+a[i];
                i++;
            }
            if(temp1==temp2)
            {
                return 1;
            }
            else if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else if(a[i]<b[j])
            {
                j++;
            }
        }
        return -1;
    }
// Another Two pointer approach 
// since we know that for the sum of 2 arrays should be equal after swapping they must satisfy this condition x-y==target,where target = (sum1-sum2)/2;
int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+m);
        
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        for(int j=0;j<m;j++)
        {
            sum2+=b[j];
        }
        if(sum1==sum2)
        {
            return 1;
        }
        if((sum1-sum2)%2!=0)
        return -1;
        int target =(sum1-sum2)/2;
        int i=0,j=0;
        while(i<n && j<m)
        {
            int diff=a[i]-b[j];
            if(diff == target)
            {
                return 1;
            }
            if(diff<target)
            {
                i++;
            }
            j++;
        }
        return -1;
    }
