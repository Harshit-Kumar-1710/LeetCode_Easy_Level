class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int Xor=0;
        vector<int>Vec;
        for(int i=0;i<n;i++)
        {
            Xor^=nums[i];
        }
        int Temp=Xor,MSB;
        for(int i=31;i>=0;i--)
        {
            if(Xor&(1<<i))
            {
                MSB=1<<i;
                break;
            }
        }
        for(auto i:nums)
        {
            if(MSB&i)
            {
                Xor^=i;
            }
        }
        Vec.push_back(Xor);
        Vec.push_back(Temp^Xor);
    return Vec;
    }
};