/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumProduct = function(nums) {
    nums.sort(function(a,b){return a-b}); const n = nums.length - 1;
    const mul1 = nums[n] * nums[n-1] * nums[n-2];
    const mul2 = nums[n] * nums[0] * nums[1];
    return mul1 > mul2 ? mul1 : mul2;
};