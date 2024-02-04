/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    var res = [],temp
    if(s.length == 1 || s.length == 0)
        return false
    for(var i in s)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            res.push(s[i])
        else
        {
            temp = res.pop()
            if(!((s[i] == ')' && temp == '(') || (s[i] == ']' && temp == '[') || (s[i] == '}' && temp == '{')))
                return false
        }
    }
    if(res.length == 0)
        return true
    else
        return false
};