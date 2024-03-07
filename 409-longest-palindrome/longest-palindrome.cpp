class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> um;
        for(char x:s)
            um[x]++;
        int odd = 0,res = 0;
        for(auto x: um)
        {
            if(x.second%2 == 0)
                res += x.second;
            else
            {
                res += x.second - 1;
                odd = 1;
            }
        }
        return res+odd;
    }
};