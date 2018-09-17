#include <bits/stdc++.h>
using namespace std;

string  firstNonRepeat(string str) {
	string nonRep = "";

	// unordered_map<char, int> hash;
	char hash[] = {'a'};
	for(int i = 0; i < str.length(); i++) {
		hash[str[i]] = hash[str[i]] + 1 || 1;
	}

	for(int i=0; i<hash.size(); ++i) {
		// if(i.second == 1) {
		// 	nonRep = i.first;
			// return nonRep;
			cout<<i<<" "<<hash[i]<<endl;
		// }
	}

	return nonRep;
}

int main() {

	string s = "abcder";
	cout<<firstNonRepeat(s);
}