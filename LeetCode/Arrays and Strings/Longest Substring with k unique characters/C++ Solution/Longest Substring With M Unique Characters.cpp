#include<bits/stdc++.h>
using namespace std;

int main() {
	//maxlen gives maximum size of window after every iteration, start and end points to current index at 
	//each iteration
	string s = "abcbdbdbbdcdabd"; int k = 2, maxlen = 0; int start= 0 , end = 0, windowStart = 0;

	unordered_map<char, int> hash;

	for(start = 0, end = 0; end < s.length(); end++) {
		char c = s[end];
		if(hash.find(c) != hash.end()) { //if the character is in the hashtable
			++hash[c];
		}
		 else {
			hash[c] = 1;
		}

		while(hash.size() > k) { //whenever hash size goes above k, we decrement the first character and inc. start
			char c = s[start];
			if(--hash[c] == 0) hash.erase(c);
			start++;
		}

		if(end - start + 1 > maxlen) { 
			maxlen = end - start + 1;
			windowStart = start;
		}
	}

	cout<<s.substr(windowStart, max(maxlen, end - start + 1))<<" "<<maxlen<<endl;
}