class Solution
{
    public:
        int longestValidParentheses(string s)
        {
            stack<int> st;
            st.push(-1);
            int len = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                    st.push(i);
                else
                {
                    st.pop();
                    if (!st.empty())
                    {
                        int j = i - st.top();
                        len = max(j, len);
                    }
                    else
                        st.push(i);
                }
            }
            return len;
        }
};