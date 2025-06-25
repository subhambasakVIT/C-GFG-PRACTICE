class Solution 
{
  public:
    int getSecondLargest(vector<int> &arr) 
    {
        // code here
        //DAY0
        int mx = INT_MIN;
        int smx = INT_MIN;
        for(auto i:arr)
        {
            mx = max(mx,i);
        }
        for(auto i:arr)
        {
            if(i>smx && i!= mx)
            {
                smx = i;
            }
        }
        return smx == INT_MIN?-1:smx;
    }
};