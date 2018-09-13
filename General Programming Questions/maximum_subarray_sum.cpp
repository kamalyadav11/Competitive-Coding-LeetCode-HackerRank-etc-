// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--) {
// 		int n; cin>>n; int a[n];
// 		for(int i = 0; i < n; i++) {
// 			cin>>a[i];
// 		}
// 		int i = 0; int max = -101; int next_sum = 0;

// 		for(i = 0; i < n; i++) {
// 			next_sum = 0;
// 			for(int j = i; j < n; j++) {
// 				next_sum += a[j];
// 				if(next_sum > max) {
// 					max = next_sum;
// 				}
// 			}
// 		}	
// 		cout<<max<<endl;
// 	}
// }

/*Better Solution -> Kadane's Algoprithm*/
#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n) {
		int max_global = a[0];
		int max_current = a[0];
		for (int i = 1; i < n; ++i) {
			max_current = max(a[i] + max_current, a[i]);
			max_global = max(max_global, max_current);
		}

		return max_global;
}


int main() {

	int t;
	cin>>t;
	while(t--) {
		int n; cin>>n;
		int a[n]; 

		for(int i = 0; i < n; i++) {
			cin>>a[i];
		}

		cout<<kadane(a, n)<<endl;
	}
	return 0;
}
