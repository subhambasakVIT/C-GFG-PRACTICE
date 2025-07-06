class Solution 
{
  public:
    int maxProduct(vector<int> &arr) 
    {
        // code here
        //DAY 9
        int n = arr.size();
        int res = INT_MIN;
        int p,s;
        p=s=1;
        for(int i=0;i<n;i++)
        {
            if(p==0)
            p=1;
            if(s==0)
            s=1;
            p*=arr[i];
            s*=arr[n-i-1];
            res = max({res,p,s});
        }
        return res;
    }
};