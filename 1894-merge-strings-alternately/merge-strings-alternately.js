/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    var res = [],i = 0;
    while(i < word1.length && i < word2.length)
    {
        res.push(word1[i])
        res.push(word2[i])
        i++
    } 
    if(i < word1.length)
    {
        while(i < word1.length)
        {   
            res.push(word1[i])
            i++
        }
    }
    else if(i < word2.length)
    {
        while(i < word2.length)
        {   
            res.push(word2[i])
            i++
        }
    }
    console.log()
    return res.join('')
    
};