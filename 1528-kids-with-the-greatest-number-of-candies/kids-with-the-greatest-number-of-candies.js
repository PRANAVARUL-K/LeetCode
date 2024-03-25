/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    var temp = Math.max(...candies);
    console.log(temp)
    var res = []
    for(var i = 0;i < candies.length;i++)
    {
        if(candies[i]+extraCandies >= temp)
            res.push(true)
        else
            res.push(false)
    }
    return res
};