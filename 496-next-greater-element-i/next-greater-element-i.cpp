class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int size1=nums1.size();
        int size2=nums2.size();
        int i=size2-1;
        unordered_map<int,int>M;
        stack<int>s;
        while(i>=0)
        {
                while(!s.empty() && s.top()<=nums2[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    M[nums2[i]]=-1;
                }
                else
                {
                    M[nums2[i]]=s.top();
                }
            s.push(nums2[i]);
            i--;
        }
        vector<int>V;
        for(auto i:nums1)
        {
            V.push_back(M[i]);
        }
    return V;
    }
};