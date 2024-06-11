// Maximum Tip Calculator
// GFG :Medium 11-06-2024


long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {

       vector<pair<int,int>>temp;

       for(int i=0;i<n;i++){

           temp.push_back({abs(arr[i]-brr[i]),i});

       }

       sort(temp.rbegin(),temp.rend());

       long long ans=0;

       for(int i=0;i<n;i++){

           int idx=temp[i].second;

           if(arr[idx]>brr[idx]){

               if(x){

                  ans+=arr[idx];

                  x--; 

               }else{

                   ans+=brr[idx];

                  y--;

               }

           }else{

               if(y){

                   ans+=brr[idx];

                   y--;

               }else{

                  ans+=arr[idx];

                  x--;

               }

           }

       }

       return ans;

    }
