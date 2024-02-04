/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    var temp = String(x);
    var reverse = '';
    for(var i = temp.length-1;i >= 0 ; i--)
        reverse += temp[i]
    console.log(reverse);
    if(reverse == temp)
        return true;
    else
        return false;
};