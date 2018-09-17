#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x, y;
		cin>>n>>x>>y;
		int arr1[n], arr2[n];
		for(int i = 0; i < n; i++) {
			cin>>arr1[i];
		}
		for(int j = 0; j < n; j++) {
			cin>>arr2[j];
		}
		int sum = 0; int i = 0, j = 0;
		for(i = 0; i < n; i++) {
			for(j = i; j <= i; j++) {
				if(arr1[i] >= arr2[j]) {
					sum += arr1[i];
				} else {
					sum += arr2[j];
				}
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}
