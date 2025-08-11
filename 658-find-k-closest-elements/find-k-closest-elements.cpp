class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        int n=arr.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>M;
        while(!pq.empty())
        {
            M.push_back(pq.top().second);
            pq.pop();
        }
    sort(M.begin(),M.end());
    return M;
    }
};