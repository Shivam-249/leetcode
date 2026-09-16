class Solution {
public:
    bool KMP_MATCH(string b,string a)
    {
        vector<int>lps(a.size(),0);
        int pre=0,suf=1;
        while(suf<a.size())
        {
            if(a[pre]==a[suf])
            {
               lps[suf]=pre+1; 
               pre++,suf++;
            }
            else
            {
                if(pre==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }
        int first=0,second=0;
        while(first<a.size() && second<b.size())
        {
            if(a[first]==b[second])
            first++,second++;
            else
            {
                if(first==0)
                second++;
                else
                first=lps[first-1];
            }
        }
        if(first==a.size())
        return 1;

        return 0;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b)
        return 1;
        int repeat=1;
        string temp=a;
        while(temp.size()<b.size())
        {
            temp +=a;
            repeat++;
        }
        if(KMP_MATCH(temp,b)==1)
        return repeat;
        if(KMP_MATCH(temp+a,b)==1)
        return repeat+1;

        return -1;
    }
};