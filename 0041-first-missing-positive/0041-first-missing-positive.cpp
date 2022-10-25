class Solution
{
    public:
        int firstMissingPositive(vector<int> &nums)
        {
            int n = nums.size();
            if (n == 1 && nums[0] == 1)
                return 2;
            map<int, int> mp;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < n; i++)
            {
                if (nums[i] <= 0)
                    continue;
                mp[nums[i]] = 1;
            }
            int i = 1;
            while (1)
            {
                if (mp[i] != 1)
                    return i;
                i++;
            }
            return i + 1;
        }
};