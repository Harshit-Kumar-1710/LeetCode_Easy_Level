class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int Temp1=start,Temp2=goal,c=0;
        if(Temp1>Temp2)
        {
            while(Temp1>0)
            {
                c++;
                Temp1=Temp1>>1;
            }
        }
        else
        {
            while(Temp2>0)
            {
                c++;
                Temp2=Temp2>>1;
            }
        }
        Temp1=start,Temp2=goal;
        int Count=0;
        while(c>0)
        {
            if((Temp1&1)==0 && (Temp2&1)==1)
            {
                Count++;
            }
            else if((Temp1&1)==1 && (Temp2&1)==0)
            {
                Count++;
            }
            Temp1=Temp1>>1;
            Temp2=Temp2>>1;
            c--;
        }
    return Count;
    }
};