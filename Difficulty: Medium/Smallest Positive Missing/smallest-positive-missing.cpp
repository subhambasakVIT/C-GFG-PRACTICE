class Solution 
{
  public:
    int missingNumber(vector<int> &arr) 
    {
        // code here
        //DAY10
        int n = arr.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr[i]=0;
            }
            mx = max(mx,arr[i]);
        }
        mx += 1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                int ind = arr[i]%mx-1;
                if(ind<n && ind>=0)
                arr[ind]+=mx;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mx)
            return i+1;
        }
        return n+1;
    }
};