class Solution 
{
  public:
    bool areAnagrams(string& s1, string& s2) 
    {
        // code here
        //DAY15
        if(s1.length() != s2.length())
        {
            return false;
        }
        
        int fr[26] = {0};
        for(int i=0;i<s1.length();i++)
        {
            fr[s1[i]-'a']++;
            fr[s2[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)
        {
            if(fr[i])
            return false;
        }
        return true;
    }
};