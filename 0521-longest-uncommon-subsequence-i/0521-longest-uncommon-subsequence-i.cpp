class Solution
{
    public:
        int findLUSlength(string a, string b)
        {
            int n = a.size();
            int m = b.size();
            if (a == b)
                return -1;
            if (n > m)
                return n;
            else
                return m;
        }
};