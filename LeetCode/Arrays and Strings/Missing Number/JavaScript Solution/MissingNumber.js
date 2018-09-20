/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    const naturalSum = (nums.length * (nums.length + 1)) / 2; let sum = 0;
    for(let num of nums) {
        sum += num;
    }
    
    return naturalSum - sum;
};