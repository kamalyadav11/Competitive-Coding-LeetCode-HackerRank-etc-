#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<math.h>
# define n 256
using namespace std;

bool anagram_sol_one(string a, string b) {
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < a.length(); i++) {
			if(a[i] != b[i]) {
				return false;
			}
	}
	return true;
}

bool anagram_sol_two(string a, string b) {
	int arr1[n] = {0};
	int arr2[n] = {0};

	for(int i = 0; i < a.length(); i++) {
		arr1[a[i]]++;
	}

	for (int i = 0; i < b.length(); ++i) {
		arr2[b[i]]++;
	}

	for(int i = 0; i < n; i++) {
		if(arr1[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}

bool anagram_sol_three(string a, string b) {
	int arr[n] = {0};
	int i;

	for(i = 0; a[i] && b[i]; i++) {
		arr[a[i]]++;
		arr[b[i]]--;
	}

	if(a[i] || b[i]) {
		return false;
	}

	for (int i = 0; i < n; ++i) {
		if(arr[i]) {
			return false;
		}
	}

	return true;
}

bool anagram_sol_four(string a, string b) {
	if(a.length() != b.length()){
        return false;
    }

	unordered_map<char, int>arr;

	for(int i = 0; a[i] && b[i]; i++) {
		arr[a[i]]++;
		arr[b[i]]--;
	}

	for(auto i: arr) {
		if(i.second) {
			return false;
		}
	}
	return true;
}

int anagram(string s) {
	if(s.length() % 2 != 0) {
		return -1;
	}

    unordered_map<char, int>freq;
    for(int i = 0; i < s.length()/2; i++) {
        freq[s[i] - 'a']++;
    }

    for(int i = s.length()/2; i < s.length(); i++) {
        freq[s[i] - 'a']--;
    }
    
    int count = 0;
    for(auto counter: freq) {
        count += abs(counter.second);
    }

    return count / 2; 

}

int main() {
	string a, b;
	cin>>a;

	// cout<<anagram_sol_one(a, b);
	// cout<<anagram_sol_two(a, b);
	// cout<<anagram_sol_three(a, b);
	// cout<<anagram_sol_four(a, b);
	cout<<anagram(a);


	return 0;
}
