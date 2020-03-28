#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define pb push_back
#define all(x) x.begin(),x.end()
ll dp[105][105][2];

ll adjBC(ll n, ll k, ll beg) {
	if(n == 0)
		return 0;
	if(n == 1) {
		if(k == 0)
			return 1;
		else return 0;
	}
	if(dp[n][k][beg] != -1)
		return dp[n][k][beg];
	ll retval = -1;
	if(beg == 1) 
		retval = adjBC(n-1, k-1, 1) + adjBC(n-1, k, 0);
	else 
		retval = adjBC(n-1, k, 1) + adjBC(n-1, k, 0);
	return dp[n][k][beg] = retval;
}

int main() {

	ll p;
	cin >> p;
	while(p--) {
		ll a, n, k;
		cin >> a >> n >> k;
		memset(dp, -1, sizeof(dp));
		ll ans = adjBC(n, k, 1) + adjBC(n, k, 0);
		cout << a << " " << ans << "\n";
	}



	return 0;
}