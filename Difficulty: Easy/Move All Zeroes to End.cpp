// User function template for C++
class Solution 
{
  public:
    void pushZerosToEnd(vector<int>& arr) 
    {
        // code here
        //DAY1
        int i=0,j=0;
        while(i<arr.size())
        {
            if(arr[i])
            {
                swap(arr[i],arr[j]);
                j++;
            }
            i++;
        }
    }
};
