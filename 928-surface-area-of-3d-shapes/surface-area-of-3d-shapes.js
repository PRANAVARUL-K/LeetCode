/**
 * @param {number[][]} grid
 * @return {number}
 */
var surfaceArea = function(grid) {
    var sum = grid.length * grid.length * 2
    for(var i = 0; i < grid.length; i++)
    {
        for(var j = 0; j < grid.length; j++)
        {
            if (i == 0) 
                sum += grid[i][j]            
            if (j == 0) 
                sum += grid[i][j]            
            if (i == grid.length-1) 
                sum += grid[i][j]
            if (j == grid.length-1) 
                sum += grid[i][j]
            if(grid[i][j] == 0)
                sum -= 2
            if (i + 1 < grid.length)
                sum += Math.abs(grid[i+1][j] - grid[i][j])
            if (j + 1 < grid.length)              
                sum += Math.abs(grid[i][j+1] - grid[i][j])                
        }
    }
    return sum 
};