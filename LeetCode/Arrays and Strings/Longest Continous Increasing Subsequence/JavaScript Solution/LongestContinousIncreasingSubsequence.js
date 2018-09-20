/**
 * @param {number[]} nums
 * @return {number}
 */
var findLengthOfLCIS = function(nums) {
    if(nums.length == 0) return 0;
    let maxm = 1, count = 1;
    for(let i = 0; i < nums.length; i++) {
        if(nums[i+1] > nums[i]) {
            maxm++;
            count = Math.max(maxm, count);
        } else {
            maxm = 1;
        }
        
    }
    return count;
};