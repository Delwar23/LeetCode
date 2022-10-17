class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        
        
        //vector<int>ans;
        sort(nums.begin(),nums.end());
        
        //ans.push_back(nums[0]);
        
        int l=0,r=1,cnt=0;
        
        for(int i=1;i<nums.size();i++)
        {
           // cout<<nums[i]<<' '<<nums[i]-1<<endl;
            
            if(nums[i]==nums[i-1])
                continue;
            if(nums[i]==nums[i-1]+1)
                r++;
            else
            {
                cnt = max(cnt,r);
                r=1;
            }
          //  cout<<r<<' ';
        }
        cnt = max(cnt,r);
        return cnt;
    }
};