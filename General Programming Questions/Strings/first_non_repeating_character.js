function firstNonRepeat(str) {
	const hashMap = {};

	for(let char of str) {
		hashMap[char] = hashMap[char] + 1 || 1;
	}

	for(let char in hashMap) {
		if(hashMap[char] == 1) {
			return char;
		}
	}
}

console.log(firstNonRepeat("ggtor"));