class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> um;
        string res = "";
        int ans = 0,l = 0,r = 0;
        while(l <= r && r < s.size())
        {   
            if(um[s[r]] == 1 || r == s.size()-1)
            {
                if(um.size() > ans)
                    ans = um.size();
                um.clear();
                l = l+1;
                r = l;
            }
            else
            {
                um[s[r]]++;   
                r++;
            }
                
        }
        for(auto x: um)
            cout<<x.first<<" "<<x.second<<endl;
        return ans;
    }
};