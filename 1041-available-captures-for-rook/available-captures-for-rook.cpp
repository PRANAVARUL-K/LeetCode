class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[i].size(); j++)
            {
                if(board[i][j] == 'R')
                {
                    int sum = 0;
                    int ti = i,tj = j;
                    while(i < board.size() && board[i][j] != 'B')
                    {
                        if(board[i][j] == 'p')
                        {
                            sum++;
                            break;
                        }
                        i++;
                    }
                    i = ti;
                    while(i >= 0 && board[i][j] != 'B')
                    {
                        if(board[i][j] == 'p')
                        {
                            sum++;
                            break;
                        }
                        i--;
                    }
                    i = ti;
                    while(j < board[0].size() && board[i][j] != 'B')
                    {
                        if(board[i][j] == 'p')
                        {
                            sum++;
                            break;
                        }
                        j++;
                    }
                    j = tj;
                    while(j >= 0 && board[i][j] != 'B')
                    {
                        if(board[i][j] == 'p')
                        {
                            sum++;
                            break;
                        }
                        j--;
                    }
                    return sum;
                }
            }
        }
        return 0;
    }
};