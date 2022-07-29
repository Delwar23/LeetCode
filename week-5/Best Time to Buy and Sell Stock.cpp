class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int cur=prices[0], i,ans=0,t,far=prices[0];
        
        t=prices.size();
        
        for(i=0;i< t ;i++)
        {
            if(prices[i]<cur)
            {
                ans=max(ans,far-cur);
                cur = prices[i];
                far=prices[i];
                
               // ans=max(ans,far-cur);
            }
            else
            {
                far = max(far,prices[i]);
            }
        }
        
        
        int  total = max(ans,far-cur);
        return total;
    }
};