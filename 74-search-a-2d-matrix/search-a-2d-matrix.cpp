class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int t = 0;
        int d = rows - 1;

        while (t <= d) {
            int midRow = t + (d - t) / 2;

            if (matrix[midRow][0] <= target && matrix[midRow][cols - 1] >= target) {
                // Perform binary search within the row
                int left = 0, right = cols - 1;
                while (left <= right) {
                    int midCol = left + (right - left) / 2;
                    if (matrix[midRow][midCol] == target)
                        return true;
                    else if (matrix[midRow][midCol] < target)
                        left = midCol + 1;
                    else
                        right = midCol - 1;
                }
                return false; // If not found in the row
            }
            else if (matrix[midRow][0] > target)
                d = midRow - 1;
            else
                t = midRow + 1;
        }

        return false;
    }
};
