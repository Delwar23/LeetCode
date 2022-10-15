class Solution
{
    public:

        vector<int> orginal;
    int n;
    Solution(vector<int> &nums)
    {
        orginal = nums;
        n = nums.size();
    }

    vector<int> reset()
    {
        return orginal;
    }

    vector<int> shuffle()
    {

        vector<int> shuffled;
        shuffled = orginal;

        int liftSize = n;
        for (int i = n - 1; i >= 0; i--)
        {
            int j = rand() % liftSize;
            swap(shuffled[i], shuffled[j]);
            liftSize--;
        }

        return shuffled;
    }
};

/**
 *Your Solution object will be instantiated and called as such:
 *Solution* obj = new Solution(nums);
 *vector<int> param_1 = obj->reset();
 *vector<int> param_2 = obj->shuffle();
 */