class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int columns=matrix[0].size(),rows=matrix.size();
        for(int i=0;i<columns;i++)
        {
            int low=0,high=rows-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(matrix[mid][i]==target)
                {
                    return true;
                }
                else if(matrix[mid][i]<target)
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