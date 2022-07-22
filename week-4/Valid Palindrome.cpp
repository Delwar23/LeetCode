class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string ss;
        int j=0;
     //   transform(s.begin(),s.end(),s.begin(),tolower);
        for(int i=0;i<n;i++)
        {
            
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
                {
            ss+=tolower(s[i]);
                j++;
            }
            
            if(s[i]>='A'&&s[i]<='Z')
            {
                ss+=tolower(s[i]);
                j++;
            } 
           
            
                
            
        }
       // cout <<s<< ' '<<ss<<endl;
      //  string ss;
        s=ss;
        reverse(s.begin(),s.end());
        if(ss==s)
            return true;
        else
            return false;
        
    }
};