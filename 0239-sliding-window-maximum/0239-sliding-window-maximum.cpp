class Solution
{
    public:
        vector<int> maxSlidingWindow(vector<int> &nums, int k)
        {
            vector<int> ans;
            deque<int> deq;
            for (int i = 0; i < k; i++)
            {
                while (!deq.empty() && nums[i] > nums[deq.front()])
                    deq.pop_front();
                deq.push_front(i);
            }
            ans.push_back(nums[deq.back()]);

            for (int i = k; i < nums.size(); i++)
            {
                int l = i - k + 1;
                while (deq.back() < l && !deq.empty())
                {
                    deq.pop_back();
                }
                while ((!deq.empty() && nums[i] > nums[deq.front()]))
                {
                    deq.pop_front();
                }
                deq.push_front(i);
                ans.push_back(nums[deq.back()]);
            }
            return ans;
        }
};