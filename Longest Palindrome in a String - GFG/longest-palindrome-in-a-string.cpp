//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int st = 0, ed = 1, mx_len = 1, p , q;
        if(s.size() == 1)
        return s;
        
        for(int i = 0; i<s.size(); i++)
        {
             p = i;
             q = i;
            while(p>=0 && q<s.size())
            {
                if(s[p] == s[q])
                {
                    p--;
                    q++;
                }
                else
                {
                    break;
                }
            }
              //cout<<p<<' '<<q<<endl;
            int len = q - p - 1;
            if(len>mx_len)
            {
                st = p+1;
                ed = q-1;
                mx_len = len;
            }
        }
        
        for(int i = 0; i<s.size() ; i++)
        {
             p = i;
             q = i+1;
            while(p>=0 && q<s.size())
            {
                if(s[p] == s[q])
                {
                    p--;
                    q++;
                }
                else
                {
                    break;
                }
            }
            
            int len = q - p - 1;
            if(len>mx_len)
            {
                st = p+1;
                ed = q-1;
                mx_len = len;
            }
        }
      //cout<<st<<' '<<ed<<endl;
        return s.substr(st, mx_len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends