//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	   vector<int>max_sum(n);
	   for(int i = 0; i<n; i++)
	   {
	       max_sum[i] = arr[i];
	   }
	   for(int i = 0; i<n ; i++)
	   {
	       for(int j = 0; j<i; j++)
	       {
	           if(arr[i]>arr[j] && (max_sum[i]<(max_sum[j]+arr[i])))
	           {
	               max_sum[i] = max_sum[j]+arr[i];
	           }
	       }
	   }
	   
	   sort(max_sum.begin(), max_sum.end());
	   return max_sum[n-1];
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends