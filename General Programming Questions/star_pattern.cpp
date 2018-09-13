#include<iostream>
using namespace std;

void star_pattern_one(int n) {

	for(int i = 1; i <= n; i++) {
		for(int  j = 1; j <= i; j++) {
			cout<<"*";
		}
			cout<<endl;
	}
}

void num_pattern_one(int n) {
	
	for(int i = 1; i <= n; i++) {
		for(int  j = 1; j <= i; j++) {
			cout<<j;
		}
			cout<<endl;
	}
}

void star_pattern_two(int n) {

	for(int i = 1; i <= n; i++) {
		for(int  j = i; j <= n; j++) {
			cout<<"*";
		}
			cout<<endl;
	}
}

// void star_pattern_three(int n) {

// 	for(int i = n; i >= 1; i--) {
// 		for(int  j = n; j >= i; j--) {
// 			cout<<"*";
// 		}
// 			cout<<endl;
// 	}
// }


// void star_pattern_two(int n) {

// 	for(int i = 1; i <= n; i++) {
// 		for(int  j = i; j <= n; j++) {
// 			cout<<"*";
// 		}
// 			cout<<endl;
// 	}
// }

void star_pattern_four(int n) {
	int midpoint = (2 * n - 1)/2;
	for (int i = 0; i < n; ++i) {
		string level;
		for (int j = 0; j < 2*n-1; ++j) {
			if(midpoint - i <= j && midpoint + i >= j) {
				level += "*";
			} else {
				level += " ";
			}
		}
		cout<<level<<endl;
	}
}



int main() {

	int n;
	cin>>n;

	// star_pattern_one(n);
	star_pattern_four(n);
	// num_pattern_one(n);
	// star_pattern_two(n);
	// star_pattern_three(n);
	

}


/*
output:  
*
**
*** //1
****
*****
1
12
123
1234 //1
12345

*****
****
***
** //2
*

*****
 **** //3
  *** 
   **
    *

   * 
  * * //4
 * * *


    
*/