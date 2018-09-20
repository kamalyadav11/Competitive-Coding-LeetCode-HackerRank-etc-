const longestSubstringUNiqueCharacter = (str, k) => {]
	let start = 0, end = 0, maxlen = 0, startWindow = 0;
	const hashMap = {};

	for(start = 0, end = 0; end < str.length; end++) {
		console.log("Before if");
		if(!hashMap[str[end]]) {
			hashMap[str[end]] = 1;
		} else {
			hashMap[str[end]]++;
		}
		console.log("After if");
		// let c = str[end];

		// hashMap[c] = hashMap[c] + 1 || 1;

		while(Object.keys(hashMap).length > k) {
			console.log("inside While")
			if(hashMap[str[start]] == 0) {
				hashMap.str[start]--;
			}
			start++;
			console.log("inside after ++")
		}

		console.log("outside")
		maxlen = Math.max(maxlen, end - start + 1);
	}

	return maxlen;
}

console.log(longestSubstringUNiqueCharacter("abcbdbdbbdcdabd", 2));