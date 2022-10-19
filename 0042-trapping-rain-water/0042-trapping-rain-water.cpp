class Solution
{
    public:
        int trap(vector<int> &height)
        {
           	
            vector<int> rightMax;
           	rightMax.push_back(height[0]);

            for (int i = 1; i < height.size(); i++)
            {
                if (rightMax[i - 1] < height[i])
                    rightMax.push_back(height[i]);
                else
                    rightMax.push_back(rightMax[i - 1]);
            }

            int leftMax[height.size() + 1];
            leftMax[height.size() - 1] = height[height.size() - 1];
            for (int i = height.size() - 2; i >= 0; i--)
            {
                if (leftMax[i + 1] < height[i])
                    leftMax[i] = height[i];
                else
                    leftMax[i] = leftMax[i + 1];
            }

            int ans = 0;         
            for (int i = 0; i < height.size(); i++)
            {
                int cur = min(leftMax[i], rightMax[i]) - height[i];
                ans += cur;
            }
            return ans;
        }
};