/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    var num = [1,5,10,50,100,500,1000]
    var roman = ['I','V','X','L','C','D','M']
    var ind,tot = 0,temp,i = s.length-1;
    while(i >= 0)
    {
        ind = roman.indexOf(s[i]);
        temp = 0
        tot += num[roman.indexOf(s[i])]
        i--
        while(num[roman.indexOf(s[i])]<num[ind])
        {
            temp += num[roman.indexOf(s[i])]
            i--
        }
        tot -= temp
    }
    return tot
};