#include<bits/stdc++.h>

#define INF 2000000000
#define MOD 1000000007
#define MOD2 100000000
#define ll long long
#define cnl(d) cout<<d<<'\n'
#define cns(d) cout<<d<<' '
#define endl '\n'
#define cno cout<<"NO\n"
#define cyes cout<<"YES\n"
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define pl pair<ll,ll>
#define vll vector<pl>
#define sl set<ll>
#define sll set<pl>
#define msl map<string,ll>
#define mll map<ll,ll>
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(a);i<=(b);i++)
#define rdp(i,a,b) for(i=(a);i>=(b);i--)
#define lb(v,z) lower_bound(all(v),z)
#define ub(v,z) upper_bound(all(v),z)
#define trvl(c,it) for(vl::iterator it=(c).begin();it!=(c).end();it++)
#define trvll(c,it) for(vll::iterator it=(c).begin();it!=(c).end();it++)
#define trsll(c,it) for(sll::iterator it=(c).begin();it!=(c).end();it++)
#define trmsl(c,it) for(msl::iterator it=(c).begin();it!=(c).end();it++)
#define trmll(c,it) for(mll::iterator it=(c).begin();it!=(c).end();it++)
#define trsl(c,it) for(sl::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;
/*
int main() {

	long long int t,n,i,minimum,ans;
	cin>>t;
	while(t--) {
		cin>>n;
		long long int a[1000005];

		for(i = 0; i < n; i++) {
			cin>>a[i];
		}

		sort(a, a+n); minimum = 100000000;
		for(i = 0; i < n - 1; i++) {
			minimum = min(minimum, (a[i] - a[i-1]));
		}
		cout<<minimum<<endl;
	}
	return 0;
}*/

int main()
{
    long long int t,n,i,minimum,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i = 0; i < n; i++)
        cin>>a[i];
        sort(a,a+n);
        ans=100000000;
        for(i = 1; i < n; i++) {
            {
            minimum = a[i]-a[i-1];
            if(ans > minimum)
            ans = minimum;
        }
        }
        cout<<ans<<endl;
    }
}

