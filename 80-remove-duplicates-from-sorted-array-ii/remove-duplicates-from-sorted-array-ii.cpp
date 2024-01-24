class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i+1 < nums.size() && nums[i] == nums[i+1])
            {
                count += 2;
                i += 1;
                while(i+1 < nums.size() && nums[i] == nums[i+1])
                    nums.erase(nums.begin() + i);
            }
            else
                count++;
        }
        return count;
    }
};