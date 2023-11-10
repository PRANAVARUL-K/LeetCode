/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function(mat) {
    var one = 0,two = mat.length-1,sum = 0
    if(mat.length%2 == 1)
        sum = mat[Math.floor(mat.length/2)][Math.floor(mat.length/2)]
    else 
        sum = 0
    while(one < mat.length && two >= 0)
    {
        if(one == two && mat.length%2 == 1)
        {
            one++
            two--
            continue
        }
        sum = sum + mat[one][one] + mat[one][two]
        one++
        two--
    }
    return sum
};