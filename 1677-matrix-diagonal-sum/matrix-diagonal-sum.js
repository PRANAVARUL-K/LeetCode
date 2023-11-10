/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function(mat) {
    var one = 0,two = mat.length-1,sum = 0
    while(one < mat.length && two >= 0)
    {
        if(one == two && mat.length%2 == 1)
            sum += mat[one][one]
        else
            sum = sum + mat[one][one] + mat[one][two]
        one++
        two--
    }
    return sum
};