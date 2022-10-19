class Solution {
public:
    void psl(vector<int>&heights,vector<int>&ps)
    {
        stack<int>st;
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty()&&heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            if(st.empty())
                ps.push_back(-1);
            else
                ps.push_back(st.top());
            st.push(i);
        }
    }
    
    void nsl(vector<int>&heights,vector<int>&ns)
    {
        stack<int>st;
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(!st.empty()&&heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            if(st.empty())
                ns.push_back(heights.size());
            else
                ns.push_back(st.top());
            st.push(i);
        }
        
        reverse(ns.begin(),ns.end());
    }
    
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int>ps;
        vector<int>ns;
        
        psl(heights,ps);
        nsl(heights,ns);
        
        
    
        int cur =0,mx=0;
        for(int i=0;i<heights.size();i++)
        {
            cur = (ns[i]-ps[i]-1)*heights[i];
            mx=max(mx,cur);
            
        }
        
        return mx;
    }
};