/**
 * @param {character[][]} board
 * @return {number}
 */
var countBattleships = function(board) {
    let n = 0
    for(var i = 0;i < board.length; i++)
    {
        for(var j = 0; j < board[i].length; j++)
        {
            if(board[i][j] === "X")
            {
                n++
                count(board,i,j)
            }
        }
    }
    return n
};
const count = (board, i, j) => {
    if (i < 0 || i >= board.length || j < 0 || j >= board[i].length || board[i][j] === '.') 
        return;
    board[i][j] = '.';
    count(board, i - 1, j);
    count(board, i + 1, j);
    count(board, i, j - 1);
    count(board, i, j + 1);
}