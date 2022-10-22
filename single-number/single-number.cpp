class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans= nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ans ^= nums[i];
         //   cout<<ans<<endl;
        }
        //cout
        return ans;
        
    }
};