class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int >res;
        for(int i=0;i<nums1.size();i++)
            res.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++)
              res.push_back(nums2[i]);
        sort(res.begin(),res.end());
        double mid;
        if(res.size()%2==0)
        {
            //cout<<res[res.size()/2]<<' '<<res[(res.size()/2)-1]<<' '<<(res[res.size()/2]+res[(res.size()/2)-1])/2.0000<<endl;
        mid = (res[res.size()/2]+res[(res.size()/2)-1])/2.0000;
        }
        else
            mid = res[res.size()/2];
        return mid;
            
    }
};