vector<int> ans;
        int maxi=arr[n-1];
        for(int i=n-1;i>=0;i--) {
            if(arr[i]>=maxi) {
                ans.push_back(arr[i]);
            }
            maxi=max(maxi,arr[i]);
        }
        reverse(ans.begin,ans.end());
