/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
var arrayStringsAreEqual = function(word1, word2) {
    if(word1.reduce((x,y) => x+y) == word2.reduce((x,y) => x+y))
        return true
    else
        return false
};