/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} color
 * @return {number[][]}
 */
var floodFill = function(image, sr, sc, color,prev = image[sr][sc]) {
    if(sr > image.length-1 || sc > image[0].length-1 || sr < 0 || sc < 0 || image[sr][sc] != prev || image[sr][sc] == color)
        return image
    var s = image[sr][sc]
        image[sr][sc] = color  
        image = floodFill(image,sr-1,sc,color,s)
        image = floodFill(image,sr+1,sc,color,s)
        image = floodFill(image,sr,sc-1,color,s)
        image = floodFill(image,sr,sc+1,color,s)
    return image
};