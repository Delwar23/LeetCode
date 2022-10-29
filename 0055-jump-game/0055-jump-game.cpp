class Solution
{
    public:
        bool canJump(vector<int> &nums)
        {
            int n = nums.size();
            int maxRichable = 0, i;
            for (i = 0; i < n; i++)
            {
               	// cout<<maxRichable<<endl;

                if (i > maxRichable)
                    return false;
                maxRichable = max(maxRichable, i + nums[i]);
            }
            return true;
        }
};