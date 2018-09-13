#include<iostream>
using namespace std;
int main() {

	int t;
	cin>>t;
		while(t--) {
		int n;
		cin>>n;
		int first = 0, second = 1; int next = 0;
		while(n--) {
			next = first + second;
			cout<<next<<" ";
			first = second;
			second = next;
			// cout<<next<<endl;
		} 
	}
}




//pseudocode
// fibonnaci => 0,1,1,2,3,5,8,13,21.........
// n = value upto which fibonnaci series is wanted
// first two elements first = 0, second = 1;

// while(n)
// next = first + second;
// first = second;
// second = next;
// for loop(int i = 0; i < n; i++){
// 	fib = a[i] + a[i-1];
// }