function reverseWords(str) {
	// return str.split(" ").reverse().join(' ');
	for(let i = 0; i < str.length; i++) {
		if(str[i] == " ") {
			str[i] = "?";
		}
	}

	return str;
}

console.log(reverseWords("Do or do not, there is no try."));