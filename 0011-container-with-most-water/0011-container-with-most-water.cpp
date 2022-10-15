class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxWater=0,n=height.size();
        int l=0,r=n-1;
        // int water = height[0]*height[n-1];
        
        while(l<r)
        {
           // int water = min(height[l],height[r]);
            
            if(height[l]>height[r])
            {
                maxWater = max(maxWater,height[r]*(r-l));
                r--;
            }
            else                
            {
                maxWater = max(maxWater,height[l]*(r-l));
                l++;
            }
            
           
        }
        return maxWater;
        
    }
};