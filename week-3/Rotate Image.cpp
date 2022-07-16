class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int i,j;
       // vector<vector>> ans;
        
        vector<int>v;              
        for(i=0;i<matrix.size();i++)
        {
            for(j=matrix.size()-1;j>=0;j--)
            {
                v.push_back(matrix[j][i]);
               // cout<<matrix[j][i]<<' ';
            }  
        }
      
        int a=0;        
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix.size();j++)
            {
               matrix[i][j]=v[a];
                a++;
            }            
        }  
       // return ans;
    }
};