//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
 bool isPalinedrome(string s, int i, int j)
 {
     while(i<j)
     {
         if(s[i]!=s[j])
         return false;
         i++;
         j--;
     }
     return true;
 }
    int palindromicPartition(string str)
    {
        // code here
        int n = str.size();
        int dp[n][n], col, row;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                dp[i][j] = 0;
            }
        }
      for(int gap = 1; gap<n; gap++)
      {
          for(col = gap, row = 0; row<n-gap; row++, col++)
          {
              if(isPalinedrome(str, row, col))
              {
                  dp[row][col]= 0;
              }
              else
              {
                  dp[row][col] = INT_MAX;
                  for(int k = row; k<col; k++)
                  {
                      dp[row][col] = min(dp[row][col], 1 + dp[row][k] + dp[k+1][col]);
                  }
              }
          }
      }
      return dp[0][n-1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends