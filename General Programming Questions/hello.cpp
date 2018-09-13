#include<bits/stdc++.h>
using namespace std;

int main() {

    string S = "ababcd";

    for(char i = 'a'; i <= 'z'; i++ ) {
        int count = 0;

        for(int j = 0; j < S.length(); j++ ) {
            if(S[j] == i) {
                count++;
                cout<<i<<" "<<count<<endl;
            }
        }
    }

    return 0;

}
