#include<iostream>
using namespace std;

string toLowerCase(string str) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i]>=65 && str[i]<=92) str[i] = str[i] + 32;
        }
        return str;
}

int main() {
	string str = "Hello";
	cout<<toLowerCase(str);
}