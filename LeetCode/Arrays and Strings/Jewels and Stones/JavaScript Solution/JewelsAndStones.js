/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    const hash = {}; let count = 0;
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