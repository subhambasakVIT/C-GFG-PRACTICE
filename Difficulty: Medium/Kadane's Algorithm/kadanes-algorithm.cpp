class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        //DAY 8
        long sm=0,mx = INT_MIN;
        for(auto i:arr)
        {
            sm +=i;
            mx = max(sm,mx);
            if(sm<0)
            sm=0;
        }
        return mx;
    }
};