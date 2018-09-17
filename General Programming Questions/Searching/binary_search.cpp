#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; int number = 15;
	cin>>n; int a[n];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}

	int min = 0, max = n - 1;
	while(min <= max) {
		int mid = min + (max - min) / 2;
		if(a[mid] == number) {
			cout<<mid<<endl;
			return 0;
		}
		if(a[mid] > number) {
			max = mid - 1;
		} else {
			min = mid + 1;
		}
	}
	return -1;
}