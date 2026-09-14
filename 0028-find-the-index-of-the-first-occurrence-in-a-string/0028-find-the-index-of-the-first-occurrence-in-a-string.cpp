class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
        return -1;
        int i=0;
        for(i=0;i<=haystack.size()-needle.size();i++)
        {
            int j=0;
            while(j<needle.size() && haystack[i+j]==needle[j])
            {
                j++;
            }
            if(j==needle.size())
            return i;
        }
        return -1;
    }
};