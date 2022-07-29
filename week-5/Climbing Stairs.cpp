class Solution {
public:
    int climbStairs(int n) {
        
        vector<int>fibo;
        
        fibo.push_back(1);
        fibo.push_back(1);
        
        for(int i=2;i<46;i++)
        {
            int j=fibo[i-1] +fibo[i-2];
            fibo.push_back(j);
        }
        
        
     return fibo[n];
        
    }
};