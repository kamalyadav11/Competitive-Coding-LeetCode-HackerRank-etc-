#include<bits/stdc++.h>
using namespace std;

int one_edit(string s1, string s2) {
	int count = 0;
	for(int i = 0; i < s1.length(); i++) {
		if(s1[i] != s2[i]) {
			count++;
			if(count > 1) {
				return -1;
			}
		}
	}

	return 1;
} 

int one_edit_diff_length(string s1, string s2) {
	int i = 0, count_diff = 0;

	while(i < s2.length()) {
		if(s1[i + count_diff] == s2[i]) {
			i++;
		} else {
			count_diff += 1;
		}	
		if(count_diff > 1) {
			return -1;
		}
	}

	return 1;
}

int  one_edit_all(string s1, string s2) {
	if(abs(s1.length() - s2.length()) >= 2) {
		return -1;
	} else if(s1.length() == s2.length()) {
		return one_edit(s1, s2);
	} else if(s1.length() > s2.length()) {
		return one_edit_diff_length(s1, s2);
	} else {
		return one_edit_diff_length(s2, s1);
	}
}

int main() {
	string s1, s2;
	cin>>s1>>s2;

	cout<<one_edit_all(s1, s2)<<endl;	
}
