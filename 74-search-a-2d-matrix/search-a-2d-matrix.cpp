class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) 
            return false;
        int d = matrix.size()-1,t = 0;
        while(t<=d)
        {
            int mid = t + (d-t)/2;
            if(matrix[mid][0] <= target && matrix[mid][matrix[0].size()-1] >= target)
            {
                int left = 0, right = matrix[0].size() - 1;
                while (left <= right) {
                    int midCol = left + (right - left) / 2;
                    if (matrix[mid][midCol] == target)
                        return true;
                    else if (matrix[mid][midCol] < target)
                        left = midCol + 1;
                    else
                        right = midCol - 1;
                }
                return false;
            }
            else if(matrix[mid][0] < target)
                t = mid + 1;
            else
                d = mid - 1;
        }
        return false;
    }
};