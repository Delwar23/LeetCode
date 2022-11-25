//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr, arr+N);
        int i = 0, j = 0;
        string s =arr[0];
        string ss = arr[N-1];
        int b = 0;
        while(i<s.size() && j<ss.size())
        {
            if(s[i] == ss[j])
            {
                i++;
                j++;
                b=1;
            }
            else
            break;
        }
        if(b)
        return s.substr(0,i);
        else
        return "-1";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends