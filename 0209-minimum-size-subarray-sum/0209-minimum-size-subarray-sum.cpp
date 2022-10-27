class Solution
{
    public:
        int minSubArrayLen(int target, vector<int> &nums)
        {

            int cur = 0, right = 0, left = 0, len = INT_MAX;

            while (right < nums.size())
            {
                cur += nums[right];

                if (cur >= target)
                {
                   	//len = min(right - left, len);
                    while (cur >= target && left <= right)
                    {
                        cur -= nums[left];
                        len = min(right - left + 1, len);
                        left++;
                    }
                }
                right++;
            }
            if (len != INT_MAX)
                return len;
            else return 0;
        }
};