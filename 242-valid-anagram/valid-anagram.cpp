class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int letters[26] = {0};
        for(int i = 0; s[i] != '\0';i++)
        {
            letters[t[i]-'a']++;
            letters[s[i]-'a']--;
        }
        for(int i = 0; i < 26;i++)
            if(letters[i]!=0)
                return false;
        return true;
    }
};