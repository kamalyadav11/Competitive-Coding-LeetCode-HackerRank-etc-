#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, s;
		cin>>n>>s;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin>>a[i];
		}

		int sum = 0; int start_index = -1, end_index = -1; int flag = 0;
		vector<int>sum_arr(n);
		for (int i = 1; i < n; ++i) {
			if(sum == a[i]) {
				start_index = i + 1;
				end_index = i + 1;
				break;
			}

			sum += a[i];
			sum_arr[i] = sum;
		}

		// if(start_index != -1 && end_index != -1) {
		// 	cout<<start_index<<" "<<end_index<<endl;
		// }

		map<int, int> m;
		for (int i = 0; i < n; ++i) {
			int j = sum_arr[i] - sum;
		}
	}
}