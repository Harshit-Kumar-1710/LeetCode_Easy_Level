class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int columns=matrix[0].size(),rows=matrix.size();
        for(int i=0;i<rows;i++)
        {
            int low=0,high=columns-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(matrix[i][mid]==target)
                {
                    return true;
                }
                else if(matrix[i][mid]<target)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
    return false;
    }
};