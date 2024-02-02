class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f;
        if(s.length()!=t.length())
            return false;
        for(auto i:s)
        {
            f[i]++;
        }

        for(auto i:t)
        {
            f[i]--;
        }

        for(auto i:s)
        {
            if(f[i]!=0)
                return false;
        }
        return true;
            
    }
};