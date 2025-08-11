class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        vector<int>K;
        int n=matrix.size();
        int m=matrix[0].size();
        int j=0,i=0;
        while(i<n)
        {
            j=0;
            while(j<m)
            {
                K.push_back(matrix[i][j]);
                j++;
            }
            i++;
       }
       priority_queue<int>pq;
       for(int i=0;i<K.size();i++)
       {
            pq.push(K[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
       }
    return pq.top();
    }
};