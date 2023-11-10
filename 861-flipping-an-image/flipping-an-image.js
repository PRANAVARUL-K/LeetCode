/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
    for(var i = 0; i < image.length; i++)
    {
        image[i] = reverse(image[i])
        image[i] = invert(image[i])
    }
    return image
};
function reverse(row)
{
    var l = 0,r = row.length-1,temp
    while(l<r)
    {
        temp = row[l]
        row[l] = row[r]
        row[r] = temp
        r--
        l++
    }
    return row
}
function invert(row)
{
    for(var i = 0; i < row.length; i++)
    {
        if(row[i] == 1)
            row[i] = 0
        else
            row[i] = 1
    }
    return row
}