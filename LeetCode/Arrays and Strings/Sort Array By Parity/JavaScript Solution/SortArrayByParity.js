var sortArrayByParity = function(A) {
    const even = [], oddArr = [];
    A.map(item => {
        item % 2 === 0 ? even.push(item) : oddArr.push(item);
    });
    return even.concat(oddArr)
};

console.log(sortArrayByParity([3, 1, 2, 4]));