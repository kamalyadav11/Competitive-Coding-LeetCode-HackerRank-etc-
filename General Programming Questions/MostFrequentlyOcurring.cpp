#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    unordered_map<int, int> hash;
    int max_count = -1; int max_item = 0;
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // for(auto i : hash) { //better way of looping through a map and we can use .operator when using short notation
    for(auto i=hash.begin(); i!=hash.end(); ++i) {
        if(max_count < i->second) {
            max_item = i->first;
            max_count = i->second;
        }
    }

    cout<<max_item<<endl;
}
