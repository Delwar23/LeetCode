class Solution
{
    public:
        int calculate(string s)
        {

            int i, n = s.size();
            stack<int> st;
            int b = 0;
            long long int num = 0;

            for (i = 0; i < n; i++)
            {
               	// cout << s[i] << ' '<<endl;
                if (s[i] == ' ')
                    continue;

                else if (s[i] >= '0' && s[i] <= '9')
                {
                    while (i < s.size() && (s[i] >= '0' && s[i] <= '9'))
                    {
                        num = num *10 + s[i] - '0';
                        i++;
                    }
                    if (!b)
                        st.push(num);
                    else
                        st.push(-num);
                    b=0;
                   	//  cout << "num : " << num << endl;
                    i--;
                    num = 0;
                }
                else
                {

                    if (s[i] == '+')
                    {
                       	// st.push(num);
                        num = 0;
                        continue;
                    }
                    else if (s[i] == '-')
                    {
                       	// st.push(num);
                        b=1;
                        continue;
                    }
                    else if (s[i] == '*' || s[i] == '/')
                    {
                        int prev = st.top();
                        st.pop();
                       	//cout << s[i] << ' ';
                        if (s[i] == '*')
                        {
                            i++;
                            while (i < s.size())
                            {
                                if (s[i] == ' ')
                                {
                                    i++;
                                    continue;
                                }

                                if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                                {
                                   	  i--;
                                    break;
                                }
                                num = num *10 + s[i] - '0';
                                i++;
                            }

                            int nxt = num;
                            num = 0;
                           	// cout<<prev<<' '<<nxt<<endl;
                            st.push(nxt *prev);
                        }
                        else
                        {
                            i++;
                            while (i < s.size())
                            {
                                if (s[i] == ' ')
                                {
                                    i++;
                                    continue;
                                }

                                if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                                {
                                    i--;
                                    break;
                                }
                                num = num *10 + s[i] - '0';
                                i++;
                            }
                            int nxt = num;
                            num = 0;

                            st.push(prev / nxt);
                        }
                    }
                }
            }

           	//	st.push(num);
            int ans = 0;
            while (!st.empty())
            {
               	// cout << st.top() << endl;
                ans += st.top();
               	// cout << st.top() << ' ';
                st.pop();
            }

            return ans;
        }
};