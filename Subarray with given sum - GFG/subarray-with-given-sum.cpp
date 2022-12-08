//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int st = 0, ed = 0;
        long long int sum = 0;
        if(s == 0)
        return {-1};
        
        while(ed<arr.size() || s<sum)
        {
            if(sum<s )
            {
                sum+=arr[ed];
                ed++;
            }
            else if(sum > s && st != ed)
            {
                sum -= arr[st];
                st++;
            }
           if(sum == s)
            break;
        }
        //cout<<s<<' '<<sum<<endl;
        if(s == sum)
        return {st+1, ed};
        else
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends