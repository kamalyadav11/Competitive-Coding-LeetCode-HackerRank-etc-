#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& A) {
    for(int i = 0, j = 0; j < A.size(); j++) {
        if(A[j] % 2 == 0) swap(A[i++], A[j]);
    }
    return A;
 }

 int main() {

 	vector<int> v{3, 1, 2, 4};
 	sortArrayByParity(v);
 }