class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        long long int mul=1;
        int zero=0;
        for(int i=0;i<nums.size();i++)
        {
            mul*=nums[i];
            if(nums[i]==0)
            zero++;
            if(zero==2)
                break;
        }
       // cout<<1*-1<<endl;
     //   cout<<mul<<' '<<zero<<endl;
        
       // cout<<zero<<endl;
        
        if(zero==2)
        {           
            for(int i=0;i<nums.size();i++)
                nums[i]=0;
        }
        
        else if(zero==1)
        {
         //   cout<<"k"<<endl;
                int m=1,j;
                for(j=0;j<nums.size();j++)
                    {
                      if(nums[j]!=0)
                            m*=nums[j];
                         cout<<j<<' '<<m<<endl;                        
                    }
                for(int i=0;i<nums.size();i++)
                {
                    if(nums[i]!=0)
                        nums[i]=0;
                    else
                        nums[i]=m;
                }
                
                
            
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=mul/nums[i];
            }
        }
        
        return nums;        
    }
};