class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> um;
        for(int i = 0;i < t.size(); i++)
            um[t[i]]++;
        for(int i = 0;i < s.size(); i++)
        {
            if(um.find(s[i]) != um.end() and um[s[i]] > 0)
            {
                if(um[s[i]] == 1)
                    um.erase(s[i]);
                else
                    um[s[i]]--;
            }
        }
        for(auto x:um)
        {
            return x.first;
        }
        return 'o';
    }
};