/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
  for(var i = 0; i < 9; i++)
  {
      var a = rowExt(board,i),b = colExt(board,i)
      if(!a || !b)
          return false
  }
  var a33 = splitInto3x3Matrices(board)
  for(var i = 0; i < a33.length; i++)
  {
      a = rowExt(a33,i)
      if(!a)
          return false
  }
  return true
};
function rowExt(board,i)
{
  var a = board[i].filter(x => x != '.')
  var b = new Set(a)
  if(a.length == b.size)
      return true
  else
      return false
}
function colExt(board,i)
{
  var a = board.map(row => row[i])
  a = a.filter(a => a != '.')
  var b = new Set(a)
  if(a.length == b.size)
      return true
  else
      return false
}
function splitInto3x3Matrices(matrix) {
  const result = [];
  for (let i = 0; i < 9; i += 3) {
    for (let j = 0; j < 9; j += 3) {
      const submatrix = [];
      for (let row = i; row < i + 3; row++) {
        submatrix.push(...matrix[row].slice(j, j + 3));
      }
      result.push(submatrix);
    }
  }

  return result;
}