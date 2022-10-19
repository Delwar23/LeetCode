class Solution
{
    public:

        void psl(vector<int> &arr, vector<int> &ps)
        {
            stack<int> st;
            for (int i = 0; i < arr.size(); i++)
            {
                while (!st.empty() && arr[i] <= arr[st.top()])
                {
                    st.pop();
                }
                if (st.empty())
                    ps.push_back(-1);
                else
                    ps.push_back(st.top());
                st.push(i);
            }
        }
    void nsl(vector<int> &arr, vector<int> &ns)
    {
        stack<int> st;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[i] <= arr[st.top()])
            {
                st.pop();
            }
            if (!st.empty())
                ns.push_back(st.top());
            else
                ns.push_back(arr.size());
            st.push(i);
        }
        reverse(ns.begin(),ns.end());
    }

    int maximum(vector<int> &arr)
    {
        int cur = 0;
        int mx = 0;
        vector<int> ps;
        vector<int> ns;

        psl(arr, ps);
        nsl(arr, ns);

        for (int i = 0; i < arr.size(); i++)
        {
            cur = (ns[i] - ps[i] - 1) *arr[i];
           //	 cout<<ps[i]<<' '<<ns[i] <<' '<<arr[i]<<' '<< cur << ' ' << mx << endl;
            mx = max(cur, mx);
        }
        return mx;
    }

    int maximalRectangle(vector<vector < char>> &matrix)
    {
        int mx = 0;
        vector<int> arr;
        int n = matrix[0].size();

        for (int i = 0; i < n; i++)
        {
            if (matrix[0][i] == '1')
                arr.push_back(1);
            else
                arr.push_back(0);
        }
        mx = maximum(arr);
       // for(int i=0;i<n;i++)
       //     cout<<arr[i]<<' ';
       // cout<<arr.size()<<' '<<matrix.size()<<endl;
       // cout<<mx<<endl;
for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == '1')
                    arr[j] += 1;
                else
                    arr[j] = 0;
            }
            int cur = maximum(arr);
         //   cout<<cur<<' '<<mx<<endl;
            mx =max(mx,cur);
        }
        //
        

        return mx;
    }
};