// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n; cin>>n;
// 	int a1[n], a2[n];

// 	for (int i = 0; i < n; ++i) {
// 		cin>>a1[i];
// 	}

// 	for (int i = 0; i < n; ++i) {
// 		cin>>a2[i];
// 	}

// 	sort(a1, a1+n);
// 	sort(a2, a2+n);
// 	int count = 0;

// 	for (int i = 0; i < n; ++i) {
// 		if(a1[i] == a2[i]) {
// 			count++;
// 		}
// 	}

// 	if(count == n) {
// 		cout<<"yes";
// 	} else {
// 		cout<<"no";
// 	}
	
// 	return 0;
// }

//Optimal solution in O(n);
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int a1[n], a2[n];

	for (int i = 0; i < n; ++i) {
		cin>>a1[i];
	}

	for (int i = 0; i < n; ++i) {
		cin>>a2[i];
	}

	int key = a1[0];
	int key_b = -1;
	for (int i = 0; i < n; ++i) {
		if(a2[i] == key) {
			key_b = i;
			break;
		}
	}

	if(key_b == -1) {
		cout<<"false";
		return 0;
	}

	int j = 0;
	for (int i = 0; i < n; ++i) {
		j = (key_b + i) % n; //j is the index of 2nd array
		if(a1[i] != a2[j]) {
			cout<<"false";
			return 0;
		}
	}

	cout<<"true";
	
}