/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function(nums1, nums2) {
    var res = []
    for(var i = 0; i < nums1.length; i++)
        res.push(check(nums2,find(nums2,nums1[i])))
    return res
};
function find(num2,x)
{
    for(var i = 0; i < num2.length; i++)
    {
        if(num2[i] == x)
            return i
    }
    return -1
}
function check(num2,i)
{
    for(var j = i+1; j < num2.length; j++)
    {
        if(num2[j] > num2[i])
            return num2[j]
    }
    return -1
}