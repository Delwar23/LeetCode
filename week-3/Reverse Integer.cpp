class Solution {
public:
    int reverse(int x) {
        //x=abs(x);
        long long int ans=0;
        bool p;
        
        if(x<0)
        {
            p=0;
            x=abs(x);
        }
        else
            p=1;
        
        
       while(x>0)
       {
           if(ans>214748364)
               return 0;
           
          
           ans=ans*10+x%10;
               x=x/10;
       }
        if(!p)
        ans=-ans;
        
        return ans;
    }
};