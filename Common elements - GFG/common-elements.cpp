//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>res;
            sort(A, A+n1);
            sort(B, B+n2);
            sort(C, C+n3);
            int i = 0, j = 0;
            while(i<n1 && j<n2)
            {
                if(A[i] == B[j])
                {
                    res.push_back(A[i]);
                    i++;
                    j++;
                }
                else if(A[i]>B[j])
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }
            i = 0, j =0;
            vector<int>ans;
            set<int>st;
            while(i<n3 && j<res.size())
            {
                if(C[i] == res[j])
                {
                    st.insert(C[i]);
                    i++;
                    j++;
                }
                else if(C[i]>res[j])
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }
           // set<int>st;
            for(auto x = st.begin(); x!=st.end(); x++)
            {
                ans.push_back(*x);
            }
            
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends