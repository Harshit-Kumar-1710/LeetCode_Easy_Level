class Solution {
public:
    void Func(int Digit,int Number,int c,int & Maximum)
    {
        if(Digit==6)
        {
            Number+=(3*c);
            if(Number<Maximum)
            {
                Number-=(3*c);
            }
            else
            {
                Maximum=Number;
            }
        }
        return;
    }
    int maximum69Number (int num)
    {
        int Maximum=num;
        int n=num,c=1;
        while(n!=0)
        {
            Func(n%10,num,c,Maximum);
            c=c*10;
            n=n/10;
        }
    return Maximum;      
    }
};