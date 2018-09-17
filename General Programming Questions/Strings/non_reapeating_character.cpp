#include<bits/stdc++.h>
using namespace std;

int non_repeat(string s) {
	unordered_map<char, int>string_counter;
	for (int i = 0; i < s.length(); ++i) {
		string_counter[s[i] - 'a']++;
	}

	for(auto i: string_counter) {
		if(i.second == 2) {
			return i.first;
		}
	}

	return -1;
}

int main() {

	string s;
	cin>>s;
	cout<<non_repeat(s)<<endl;
}
