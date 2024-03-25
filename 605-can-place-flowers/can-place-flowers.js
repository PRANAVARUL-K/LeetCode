/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function(flowerbed, n) {
    if(flowerbed.length == 1 && ((flowerbed[0] == 0 && n == 1) || (flowerbed[0] == 1 && n == 0) || (flowerbed[0] == 0 && n == 0)))
        return true
    else if(flowerbed.length == 1 && ((flowerbed[0] == 1 && n == 1) || (flowerbed[0] == 1 && n == 1)))
        return false
    var count = 0
    if(flowerbed.length > 1 && flowerbed[0] == 0 && flowerbed[1] == 0)
    {
        count++;
        flowerbed[0] = 1;
    }
    if(flowerbed.length > 1 && flowerbed[flowerbed.length-1] == 0 && flowerbed[flowerbed.length-2] == 0)
    {
        count++;
        flowerbed[flowerbed.length-1] = 1;
    }
    for(var i = 0;i < flowerbed.length-2; i++)
    {
        var temp = flowerbed.slice(i,i+3)
        console.log(temp)
        var temp1 = temp.reduce((acc,i) =>{ if(i == 0) return acc+1;
        else return acc},0)
        console.log(temp1)
        if(temp1 == temp.length)
        {
            count++
            flowerbed[i+1]=1
        }
    }
    return count >= n
};