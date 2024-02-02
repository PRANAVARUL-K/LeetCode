class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,int>f;
        for(int i = 0; s[i] != '\0';i++)
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