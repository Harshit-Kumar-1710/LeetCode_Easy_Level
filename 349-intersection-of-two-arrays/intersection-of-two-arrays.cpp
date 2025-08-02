class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>nums;
        unordered_set<int>s1;
        unordered_set<int>s2;
        for(auto i:nums1)
        {
            s1.insert(i);
        }
        for(auto i:nums2)
        {
            s2.insert(i);
        }
        int size1=s1.size();
        int size2=s2.size();
        int i=0;
        for(auto k:s1)
        {
            nums.push_back(k);
        }
        for(auto k:s2)
        {
            nums.push_back(k);
        }
        map<int,int>m;
        for(int i=0;i<size1+size2;i++)
        {
            m[nums[i]]++;
        }
        vector<int>Vec;
        for(auto p:m)
        {
            if(p.second==2)
            {
                Vec.push_back(p.first);
            }
        }
    return Vec;
    }
};