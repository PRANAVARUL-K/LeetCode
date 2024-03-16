/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    const totalProduct = nums.reduce((acc, num) => acc * num, 1);
    const countZeros = nums.reduce((count, currentValue) => {
    if (currentValue === 0) {
        return count + 1;
    } else {
        return count;
    }
}, 0);
    return nums.map(num =>{ 
        if(num == 0 && countZeros == 1) 
            return nums.reduce((acc, num) => {
    if(num != 0) 
        return acc * num;
    else 
        return acc;
        }, 1);
        else if(countZeros > 1)
            return 0;
        else
            return totalProduct / num
    });
};