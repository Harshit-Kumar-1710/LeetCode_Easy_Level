class Solution {
public:
    string Func(int P)
    {
        if(P==0)
        {
            return "";
        }
        else if(P==1)
        {
            return "I";
        }
        else if(P==2)
        {
            return "II";
        }
        else if(P==3)
        {
            return "III";
        }
        else if(P==4)
        {
            return "IV";
        }
        else if(P==5)
        {
            return "V";
        }
        else if(P==6)
        {
            return "VI";
        }
        else if(P==7)
        {
            return "VII";
        }
        else if(P==8)
        {
            return "VIII";
        }
        else if(P==9)
        {
            return "IX";
        }
        else if(P==10)
        {
            return "X";
        }
        else if(P==20)
        {
            return "XX";
        }
        else if(P==30)
        {
            return "XXX";
        }
        else if(P==40)
        {
            return "XL";
        }
        else if(P==50)
        {
            return "L";
        }
        else if(P==60)
        {
            return "LX";
        }
        else if(P==70)
        {
            return "LXX";
        }
        else if(P==80)
        {
            return "LXXX";
        }
        else if(P==90)
        {
            return "XC";
        }
         else if(P==100)
        {
            return "C";
        }
        else if(P==200)
        {
            return "CC";
        }
        else if(P==300)
        {
            return "CCC";
        }
        else if(P==400)
        {
            return "CD";
        }
        else if(P==500)
        {
            return "D";
        }
        else if(P==600)
        {
            return "DC";
        }
        else if(P==700)
        {
            return "DCC";
        }
        else if(P==800)
        {
            return "DCCC";
        }
        else if(P==900)
        {
            return "CM";
        }
        else if(P==1000)
        {
            return "M";
        }
        else if(P==2000)
        {
            return "MM";
        }
        else
        {
            return "MMM";
        }
    }
    string intToRoman(int num) 
    {
        int N=num,c=1;
        vector<int>V;
        string str;
        while(N>0)
        {
            int Rem=N%10;
            V.push_back(Rem*c);
            N=N/10;
            c=c*10;
        }
        int n=V.size();
        reverse(V.begin(),V.end());
        for(int i=0;i<n;i++)
        {
            str+=Func(V[i]);
        }
    return str;
    }
};