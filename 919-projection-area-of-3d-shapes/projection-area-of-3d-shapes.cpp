class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum = grid.size() * grid.size();
        for(int i = 0;i < grid.size(); i++)
        {
            for(int j = 0;j < grid[0].size();j++)
            {
                if(grid[i][j] == 0)
                    sum -=1;
            }
        }
        for (int i = 0; i < grid.size(); i++) {
            sum += findMax(grid[i]);
            vector<int> temp;
            for (int j = 0; j < grid[0].size(); j++) {
                temp.push_back(grid[j][i]);
            }
            sum += findMax(temp);
        }
        return sum;
    }

    int findMax(vector<int> arr) {
        if (arr.size() == 0)
            return 0;
        int maxElement = arr[0];
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }
};