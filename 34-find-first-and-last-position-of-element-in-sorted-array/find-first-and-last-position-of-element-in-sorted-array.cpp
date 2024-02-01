class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res = {-1, -1};
    int n = nums.size();
    if (n == 0) return res;

    // Search for the leftmost index
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    if (nums[left] != target) return res;
    res[0] = left;

    // Search for the rightmost index
    right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2 + 1; // Ensure mid biases towards right
        if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid;
    }
    res[1] = right;

    return res;
}

};