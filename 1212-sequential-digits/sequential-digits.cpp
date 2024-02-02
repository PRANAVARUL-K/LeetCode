class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for (int num = 1; num <= 9; ++num) {
            generateSequentialDigits(num, low, high, res);
        }
        sort(res.begin(), res.end());
        return res;
    }

    void generateSequentialDigits(int num, int low, int high, vector<int>& res) {
        if (num >= low && num <= high) {
            res.push_back(num);
        }
        int lastDigit = num % 10;
        if (num > high || lastDigit == 9) return;
        int nextNum = num * 10 + lastDigit + 1;
        generateSequentialDigits(nextNum, low, high, res);
    }
};