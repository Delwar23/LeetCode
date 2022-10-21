class Solution
{
    public:
        string countAndSay(int n)
        {

            if (n == 1)
                return "1";
            else if (n == 2)
                return "11";
            string prev = "11", next;

            for (int i = 2; i < n; i++)
            {
                int cnt = 1, j;
                string temp = "";

                for (j = 1; j < prev.size(); j++)
                {
                    if (prev[j] == prev[j - 1])
                    {
                        cnt++;
                    }
                    else
                    {
                        temp += cnt + '0';
                        temp += prev[j - 1];
                        cnt = 1;
                    }
                }

                temp += cnt + '0';
                temp += prev[j - 1];
                prev = temp;
            }

            return prev;
        }
};