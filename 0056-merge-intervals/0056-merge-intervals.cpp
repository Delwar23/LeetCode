class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        int n = intervals.size();
        
       sort(intervals.begin(),intervals.end());
        
        int start=intervals[0][0];
        int end=intervals[0][1];
        //cout<<n<<endl;
     //  sort(intervals.begin(),intervals.end());
        
        for(int i=1;i<n;i++)
        {
            
           // cout<<intervals[i][0]<<' '<<end<<endl;
            
            if(end>=intervals[i][0])
            {
                if(end<intervals[i][1])
                  end= intervals[i][1];
                
                if(start>intervals[i][0])
                   start=intervals[i][0];
            }
            else
            {
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
           // start=
        }
        ans.push_back({start,end});
        return ans;
        
    }
};