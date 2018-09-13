#include<iostream>
#include<string.h>
using namespace std;

void reverse_string(string s) {
	string reversed = "";
	for(int i = s.length(); i >=0; i--) {
		reversed = reversed + s[i];
	}
	cout<<s;
	cout<<reversed;
	if(s != reversed) {
		cout<<"Not Palindrome";
	} else {
		cout<<"Palindrome";
	}
}

void reverse_integer(int n) {
	int reverse = 0, rem = 0;
	
	while(n != 0) {
		rem = n%10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	cout<<reverse<<endl;
}

int main() {

	// string s;
	// cin>>s;
	int n;
	cin>>n;

	// reverse_string(s);
	reverse_integer(n);
	

}