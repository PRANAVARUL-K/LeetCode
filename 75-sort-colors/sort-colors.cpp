class Solution {
public:
    void sortColors(vector<int>& num) {
        int n = 0;
        vector<int> result;
        while(n < 3)
        {
            for(int i = 0; i < num.size() ;i++)
            {
                if(num[i] == n)
                    result.push_back(n);
            }
            n++;
        }
        num = result;
    }
};