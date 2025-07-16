class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int Temp1=start,Temp2=goal;
        int Xor=Temp1^Temp2;
        return __builtin_popcount(Xor);
    }
};