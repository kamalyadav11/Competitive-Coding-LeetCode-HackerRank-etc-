// #include<iostream>

// int main() {

// 	int n1, n2;
// 	std::cin>>n1>>n2;
// 	int a1[n1], a2[n2], arr[n1] = {0};

// 	for (int i = 0; i < n1; i++) {
// 		std::cin>>a1[i];
// 	}
// 	for(int i = 0; i< n2; i++) {
// 		std::cin>>a2[i];
// 	}

// 	for(int i = 0; i < n1; i++) {
// 		for(int j = 0; j < n2; j++) {
// 			if(a1[i] == a2[j]) {
// 				arr[i] = a1[i];
// 				arr[i++];
// 			}
// 		}
// 	}
// 	for(int i = 0; i < n1; i++) {
// 		if(arr[i] != 0)
// 		std::cout<<arr[i]<<std::endl;
// 	}

// }

/*Better Solution*///Intersection
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int p1 = 0, p2 = 0;
// 	int n1, n2;
// 	cin>>n1>>n2;
// 	int a1[n1], a2[n2];

// 	for (int i = 0; i < n1; i++) {
// 		std::cin>>a1[i];
// 	}

// 	for(int i = 0; i< n2; i++) {
// 		std::cin>>a2[i];
// 	}	

// 	while(p1 < n1 && p2 < n2){
// 		if(a1[p1] == a2[p2]) {
// 			cout<<a1[p1]<<" ";
// 			p1++; p2++;
// 		} else if(a1[p1] > a2[p2]) {
// 			p2 += 1;
// 		} else {
// 			p1 += 1;
// 		}
// 	}

// }

/*Union*/
#include<bits/stdc++.h>
using namespace std;

int main() {

	int p1 = 0, p2 = 0;
	int n1, n2;
	cin>>n1>>n2;
	int a1[n1], a2[n2];

	for (int i = 0; i < n1; i++) {
		std::cin>>a1[i];
	}

	for(int i = 0; i< n2; i++) {
		std::cin>>a2[i];
	}	

	while(p1 < n1 && p2 < n2){
		if(a1[p1] < a2[p2]) {
			cout<<a1[p1]<<" ";
			p1++; 
		} else if(a1[p1] > a2[p2]) {
			cout<<a2[p1]<<" ";
			p2 += 1;
		} else {
			cout<<a1[p2++]<<" ";
			p1 += 1;
		}
	}
	while(p1 < n1)
     cout <<a1[p1++] << " ";
 
  	while(p2 < n2)
    cout <<a2[p2++] << " ";

}
