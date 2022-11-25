//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int>lps(pat.size(), 0);
            int i = 0, j = 0;
            for(int i = 1; i<pat.size(); i++)
            {
                j = lps[i-1];
                
                while(j>0 && pat[i]!=pat[j])
                j = lps[j-1];
                
                if(pat[i] == pat[j])
                j++;
                lps[i] = j;
            }
            i=0,j=0;
            vector<int>ans;
            
            while(i<txt.size())
            {
                if(txt[i]==pat[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    if(j!=0)
                    {
                        j = lps[j-1]; 
                    }
                    else
                    i++;
                }
                if(j == pat.size())
                {
                    
                   ans.push_back(i-pat.size()+1);
                    j = lps[j-1];
                }
                
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends