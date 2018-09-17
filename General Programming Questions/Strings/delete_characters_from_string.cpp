#include<iostream>
using namespace std;

string deleteCharacter(string str) {
	switch(str) {
		case a:
		 delete a;
		case e:
		 delete e;
		case i:
		 delete i;
		case o:
		 delete o;  
	}
	return str;
}

int main() {

	string s = "Battle of the Vowels";
	cout<<deleteCharacter(s);
}