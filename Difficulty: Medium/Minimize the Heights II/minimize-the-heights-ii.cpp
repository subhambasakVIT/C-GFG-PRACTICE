// User function template for C++

class Solution 
{
  public:
    int getMinDiff(vector<int> &arr, int k) 
    {
        // code here
        //DAY11
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int mn = 0;
        int mx =0;
        int ans = arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            mn = min(arr[0]+k,arr[i]-k);
            mx = max(arr[i-1]+k,arr[n-1]-k);
            if(mn<0) continue;
            ans = min(ans,mx-mn);
        }
        return ans;
    }
};