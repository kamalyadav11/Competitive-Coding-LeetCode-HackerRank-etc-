var numSubarrayProductLessThanK = function(nums, k) {
    if (k <= 1) return 0;
    var prod = 1, ans = 0; 
    for(let i = 0, j = 0; j < nums.length; j++) {
       prod *= nums[j];
        while(prod >= k) {
            prod /= nums[i++];
        }
        ans += j - i + 1;
    }
    return ans;
};

console.log(numSubarrayProductLessThanK([1, 1, 1, 1], 1));