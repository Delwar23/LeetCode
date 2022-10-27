class Solution
{
    public:
        int longestPalindrome(string s)
        {
            map<char,int>mp;
            int len=0,carry=0;
            
            for(int i=0;i<s.size();i++)
            {
                mp[s[i]]++;
            }
            for(auto x : mp)
            {
                if(x.second%2==0)
                    len+=x.second;
                else
                {
                    len += x.second-1;
                    carry =1;
                }
            }
            return len+carry;
            
        }
};