class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        if(n==1)
            return 0;
        //nums[-1]=-1;
      //  nums[n]=-1;
        
        for(int i=0; i<n-1; i++)
        {
            if(i==0&&nums[i]>nums[i+1])
                return i;
            else if(i==0)
                continue;
           else if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
                return i;
        }
        return n-1;
    }
};