/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    const hash = {}; let count = 0;
     for(let char of J) {
        hash[char] = true;
    }
    
    for(let i = 0; i < S.length; i++) {
        if(hash[S[i]] === true) {
            count++;
        }
    }
    
    return count;
};

console.log(numJewelsInStones("zZ", "ZZ"))