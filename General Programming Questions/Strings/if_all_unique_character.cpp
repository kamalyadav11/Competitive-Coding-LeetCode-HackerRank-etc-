#include<iostream>
using namespace std;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int main() {
	//The following
// lines at the beginning of the code make input and output more efficient:
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//This is the solution when you are not al;lowed to use external data structure
	string str = "klmn"; int count = 0; char c;
	bool arr[256] = {};
	for(int i = 0 ; i < str.length() - 1; i++) {
				// c = str[0];
		// if(str[i] == c) {
		//  	count++;
		// }
		int val = str[i];
		if(arr[val]) {cout<<"Not Unique"; return 0;}
		arr[val] = true;
	}
	// if(count > 1) {
	// 	cout<<"Not Unique"<<endl;
	// 	return 0;
	// }

	cout<<"Unique"<<endl;
}