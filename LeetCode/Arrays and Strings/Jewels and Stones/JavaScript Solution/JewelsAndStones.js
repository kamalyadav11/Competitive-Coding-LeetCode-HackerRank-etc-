/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    const hash = {}; let count = 0;
    // for(let char of S) {
    //     hash[char] = hash[char] + 1 || 1;
    // }
    
    // for(let char in hash) {
    //     console.log(J[hash[char]])
    //    // if(char == J[hash[char]]) {
    //    //      count++;
    //    //  }
    // }
    for(let i = 0; i < S.length; i++) {
        for(let j = 0; j < J.length; j++) {
            if(S[i] === J[j]) {
                count++;
            }
        }
    }
    return count;
};

console.log(numJewelsInStones("z", "ZZ"))