#include<bits/stdc++.h>
using namespace std; 

 int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        
        for(auto i: words) {
            string codes = "";
            for(auto j: i) {
                codes += morse_code[j - 'a'];
            }
             s.insert(codes);
        }
        
        return s.size();
    }

int main() {

	std::vector<string> v = {"gin", "zen", "gig", "msg"};
	cout<<uniqueMorseRepresentations(v);
}