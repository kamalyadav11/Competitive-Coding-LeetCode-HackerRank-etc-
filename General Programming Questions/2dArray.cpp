#include<bits/stdc++.h>
using namespace std;

 vector<vector<int> > flipAndInvertImage(vector<vector<int> >& A) {
    for(auto& i : A) reverse(i.begin(), i.end());
        int n = A.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(A[i][j] == 0) {
                    A[i][j] = 1;
                } else {
                    A[i][j] = 0;
                }
            }
	    }

        return A;
    }

int main() {
	vector<vector<int> > a{ {1, 1, 0}, {1, 0, 1}, {0, 0, 0} };

	flipAndInvertImage(a);
}
