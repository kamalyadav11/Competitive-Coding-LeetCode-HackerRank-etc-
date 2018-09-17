#include<bits/stdc++.h>
using namespace std;

int jewelsAndStones(string S, string J) {
	unordered_map<char, int> hash; int count = 0;

	for(int i = 0; i < S.length(); i++) {
		hash[S[i]]++;
	}

	for(int i = 0; i < J.length(); i++) {
		if(hash.find(J[i]) != hash.end()) {
			count += hash[J[i]];
		}
	}

	return count;
}

int main() {
	string S = "aA", J = "aAAbbbb";
	cout<<jewelsAndStones(S, J)<<endl;
}