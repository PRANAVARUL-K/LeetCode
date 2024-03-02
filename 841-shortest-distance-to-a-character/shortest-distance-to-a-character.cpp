class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int prev = find_next(s,c,0),next = find_next(s,c,prev+1);
        cout<<prev<<" "<<next;
        vector<int> res;
        for(int i = 0;i < s.size(); i++)
        {
            if(i == next)
            {
                prev = next;
                next = find_next(s,c,prev+1);
                res.push_back(0);
            }
            else
            {
                if(i == prev)
                    res.push_back(0);
                else
                    res.push_back(min(abs(i-prev),abs(i-next)));
            }
        }
        return res;
    }
    int find_next(string s, char c, int r)
    {
        int temp = r;
        while(s[r] != c && r < s.size())
            r++;
        if(s[r] == c)
            return r;
        else 
            return temp-1;
    }
};