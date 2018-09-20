var containsDuplicate = function(nums) {
    const hash = {};
    for(let num of nums) {
        hash[num] = hash[num] + 1 || 1;
    }
    
    for(let num in hash) {
        if(hash[num] > 1) {
            return true;
        }
    }
    
    return false;
};

console.log(containsDuplicate([3,1]))