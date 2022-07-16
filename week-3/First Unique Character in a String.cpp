class Solution {
public:
    int firstUniqChar(string s) {
        
       int n = s.size();
       int ans [26]={0};
        
        for(char i:s )
            ans[i-'a'] +=1;
        
        
        for(int i=0;i<n;i++)
        {
            if(ans[s[i]-'a']==1 )
                return i;
        }
      return -1;
    }
    
        
    
};