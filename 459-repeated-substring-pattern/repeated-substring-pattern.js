/**
 * @param {string} s
 * @return {boolean}
 */
var repeatedSubstringPattern = function(s) {
    for(var i = 1;i <= s.length/2; i++)
    {
        var j = i;
        var test = s.slice(0,i)
        while(j+i <= s.length+1)
        {
            if(test !== s.slice(j,j+i))
                break
            j = j+i
        }
        if(j == s.length)
            return true;
    }
    return false;
    
};