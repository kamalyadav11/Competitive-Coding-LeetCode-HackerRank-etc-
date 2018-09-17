#include<bits/stdc++.h>
using namespace std;

int jewelsAndStones(string S, string J) {
	// unordered_map<char, int> hash; int count = 0;

	// for(int i = 0; i < S.length(); i++) {
	// 	hash[S[i]]++;
	// }

	// for(int i = 0; i < J.length(); i++) {
	// 	if(hash.find(J[i]) != hash.end()) {
	// 		count += hash[J[i]];
	// 	}
	// }

	// return count;

	//Second Optimal Solution
	unordered_set<char> hash(J.begin(), J.end());//set of J string 
    auto count = [&hash](auto common) {return hash.count(common);};
        return count_if(S.begin(), S.end(), count);
  } //[&hash] (what to find) char c = anonymous charcter

int main() {
	string S = "aA", J = "aAAbbbb";
	cout<<jewelsAndStones(S, J)<<endl;
}