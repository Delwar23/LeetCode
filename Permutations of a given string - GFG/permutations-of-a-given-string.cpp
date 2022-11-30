//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void permute(int l, int r, string s, vector<string>&res)
	{
	    if(l == r)
	    {
	        res.push_back(s);
	    }
	    else
	    { for(int i = l; i<=r; i++)
	    {
	        swap(s[i], s[l]);
	        permute(l+1, r , s, res);
	        swap(s[i], s[l]);
	    }
    	   
	    }
	}
	
		vector<string>find_permutation(string s)
		{
		    // Code here there
		   vector<string>res;
		    //string cur;
		    int n = s.size();
		    permute(0, n-1, s, res);
		    set<string>st;
		    sort(res.begin(), res.end());
		    for(int i = 0; i<res.size(); i++)
		    st.insert(res[i]);
		    
		    vector<string>ans;
		    for(auto it = st.begin(); it!=st.end(); it++)
		    ans.push_back(*it);
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends