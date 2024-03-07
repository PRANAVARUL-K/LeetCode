class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> um1;
        for(int i = 0;i < jewels.size(); i++)
            um1[jewels[i]]++;
        int count = 0;
        for(int i = 0;i < stones.size(); i++)
        {
            if(um1[stones[i]] > 0)
                count++;
        }
        return count;
    }
};