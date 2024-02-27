class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long int res = 0;
        for(int i = 0;i < columnTitle.size(); i++)
        {
            long long int temp = ((long int) columnTitle[i] - 'A') + 1;
            res = res * 26 + temp;
        }
        return res;
    }
};