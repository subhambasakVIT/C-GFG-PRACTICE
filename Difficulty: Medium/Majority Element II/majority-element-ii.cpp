class Solution 
{
  public:
    vector<int> findMajority(vector<int>& arr) 
    {
        // Code here
        //DAY5
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        int x = arr.size()/3;
        for(auto i:mp)
        {
            if(i.second>x)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};