class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int a = Digits(low),i,b = Digits(high),k;
        long long int first = 0,org = 0;
        long long int add = 0;

        vector<int> res;
        for(i = 1; i <= a; i++)
        {
            first = (first*10)+i;
            add = add*10 + 1;
        }
        org = first;
        k = i-1;
        for(i = a;i <= b; i++)
        {
            if(first <= high && first >= low)
                res.push_back(first);
            while(first%10 != 9)
            {
                first = first + add;
                if(first <= high && first >= low)
                    res.push_back(first);
            }
            k = k+1;
            first = org*10 + k;
            org = first;
            add = add*10 + 1;
        }
        sort(res.begin(),res.end());
        return res;
    }
    int Digits(int num)
    {
        int count = 0;
        while(num > 0)
        {
            count++;
            num /= 10;
        }
        return count;
    }
};