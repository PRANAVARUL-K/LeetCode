/**
 * @param {number[][]} matrix
 * @return {boolean}
 */
var isToeplitzMatrix = function(matrix) {
    for(var i = 0;i < matrix.length-1; i++)
    {
        for(var j = 0;j < matrix[0].length-1; j++)
        {
            if(!diagonal(matrix,i,j))
                return false
        }
    }
    return true
};
function diagonal(matrix,i,j)
{
    if(i+1 > matrix.length-1 || j+1 > matrix[0].length-1)
        return true
    if(matrix[i][j] != matrix[i+1][j+1])
        return false    
    return diagonal(matrix,i+1,j+1)
}