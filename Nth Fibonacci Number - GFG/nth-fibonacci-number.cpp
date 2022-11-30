//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        vector< long long int>res;
        long long int i, one = 0, two = 1, three = 1;
        res.push_back(one);
        res.push_back(two);
        res.push_back(three);
        
        for(i = 3; i<=n; i++)
        {
            res.push_back((res[i-1]+res[i-2])%1000000007);
        }
       
        
        return res[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends