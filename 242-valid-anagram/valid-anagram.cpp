class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f;
        if(s.length()!=t.length())
            return false;
        for(int i = 0; s[i] != '\0' && t[i] != '\0';i++)
        {
            f[s[i]]++;
            f[t[i]]--;
        }
        for(auto i:s)
            if(f[i]!=0)
                return false;
        return true;
    }
};