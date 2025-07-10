class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        // code here
        //DAY12
        int total =0;
        int mxsm = arr[0] , cmx = arr[0];
        int mnsm = arr[0] , cmn = arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            cmx = max(arr[i],cmx+arr[i]);
            mxsm = max(mxsm , cmx);
            
            cmn = min(arr[i],cmn+arr[i]);
            mnsm = min(mnsm , cmn);
            
            total += arr[i];
        }
        
        total += arr[0];
        
        if(mxsm <0)
        return mxsm;
        
        return max(mxsm,total-mnsm);
    }
};