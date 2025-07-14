// User function template for C++
class Solution 
{
  public:
    string addBinary(string& s1, string& s2) 
    {
        // your code here
        //DAY14
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        string res= "";
        int cry =0,i=0;
        while(i<s1.length() || i<s2.length() || cry)
        {
            int bit1 = (i<s1.length())?s1[i]-'0':0;
            int bit2 = (i<s2.length())?s2[i]-'0':0;
            int sm = bit1+bit2+cry;
            res += (sm%2)+'0';
            cry = sm/2;
            i++;
        }
        reverse(res.begin(),res.end());
        size_t ps = res.find_first_not_of('0');
        return (ps==string::npos)?"0":res.substr(ps);
    }
};