#include<iostream>

int main() {

	int arr[] ={0};
	int n; std::cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) {
		std::cin>>a[i];
		if(a[i]%2 == 0) {
			arr[i]++;
		}
	}
	for (int i = 0; i < n; i++){
		if(arr[i] == 1) {
			std::cout<<i<<std::endl;
		}
	}

}
