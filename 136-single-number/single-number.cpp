class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i = 0; i < nums.size(); i = i+2)
        {
            if(i+1 < nums.size() && nums[i] != nums[i+1])
                return nums[i];
        }
        return nums[i-2];
    }
};