#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>a;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        cout<<*min_element(a.begin(), a.end())<<endl;
    }
    return 0;
}
