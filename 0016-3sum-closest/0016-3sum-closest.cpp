class Solution
{
    public:
        int threeSumClosest(vector<int> &nums, int target)
        {
            sort(nums.begin(), nums.end());
            int diff = INT_MAX, ans;

            for (int i = 0; i < nums.size(); i++)
            {
                int low = i + 1, high = nums.size() - 1, start = nums[i];

                while (low < high)
                {
                   	// int sum = start + nums[low] + nums[high];
                    if (start + nums[low] + nums[high] == target)
                        return target;
                    else if (abs(start + nums[low] + nums[high] - target) < diff)
                    {
                        ans = start + nums[low] + nums[high];
                        diff = abs(start + nums[low] + nums[high] - target);
                    }
                    if (start + nums[low] + nums[high] > target)
                    {
                       	//start = nums[low];
                        high--;
                    }
                    else
                        low++;
                }
            }

            return ans;
        }
};