//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        reverse(s.begin(), s.end());
        int start = 0, ed = 0;
        s+='.';
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]=='.')
            {
                reverse(s.begin()+start, s.begin()+ed);
                start = i+1;
                ed++;
                
            }
            else
            ed++;
        }
        s.erase(s.size()-1);
        return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends