class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int n = s.size();
        int nn= t.size();
        
        if(n!=nn)
            return false;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
                return false;
        }
        return true;
        
    }
};