// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--) {
// 		int n; cin>>n;
// 		int a[n]; 
// 		for(int i = 1; i < n; i++) {
// 			cin>>a[i];
// 		}

// 		sort(a, a+n);
// 		for(int i = 1; i < n; i++) {
// 			if(i != a[i]) {
// 				cout<<i<<endl;
// 			}
// 		}
// 	}
// 	return 0;
// }
/*Better solution*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n; cin>>n;
		int a[n]; 
		for(int i = 1; i < n; i++) {
			cin>>a[i];
		}

		// sort(a, a+n);
		int sum = 0;
		for(int i = 1; i < n; i++) {
			sum += a[i];
		}
		cout<<(n * (n+1)) / 2 - sum <<endl;
	}
	return 0;
}