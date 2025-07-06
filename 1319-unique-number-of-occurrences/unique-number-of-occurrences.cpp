class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int n=arr.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        vector<int>k;
        for(auto p:m)
        {
           k.push_back(p.second);
        }
        int size1=k.size();
        int Maximum=INT_MIN;
        for(int i=0;i<size1;i++)
        {
            if(k[i]>Maximum)
            {
                Maximum=k[i];
            }
        }
        vector<int>q(Maximum+1);
        for(int i=0;i<size1;i++)
        {
            q[k[i]]=q[k[i]]+1;
        }
        for(int i=0;i<Maximum+1;i++)
        {
            if(q[i]>1)
            {
                return false;
            }
        }
    return true;
    }
};