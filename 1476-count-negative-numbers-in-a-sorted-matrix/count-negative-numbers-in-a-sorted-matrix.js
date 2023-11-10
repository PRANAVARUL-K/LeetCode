/**
 * @param {number[][]} grid
 * @return {number}
 */
var countNegatives = function(grid) {
    var count = 0
    for(var i = 0;i < grid.length; i++)
    {
        for(var j = grid[i].length-1; j > -1; j--)
        {
            if(grid[i][j] < 0)
                count++
            else
                break
        }
    }
    return count
};