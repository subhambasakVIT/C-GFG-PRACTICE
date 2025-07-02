
class Solution 
{
  public:
    int maximumProfit(vector<int> &prices) 
    {
        // code here
        //DAY6
        int n = prices.size();
        long profit = 0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit += (prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
