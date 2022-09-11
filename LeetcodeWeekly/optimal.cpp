class Solution {
public:
    int partitionString(string s) {
        int n=s.length();
        int count=1;
        map<char,int>mp;
        for(auto it:s)
        {
            if(mp[it]>0)
            {
             count++;
                mp.clear();
                mp[it]++;
                
            }
            else
                mp[it]++;
        }
    return count;}
};