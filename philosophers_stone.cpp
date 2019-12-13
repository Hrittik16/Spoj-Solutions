// Edit Distance
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

void print(vector<vector<ll>>& dp, ll n, ll m) {
	cout << "\n";
	for(ll i = 0; i < n; i++) {
		for(ll j = 0; j < m; j++)
			cout << dp[i][j] << " ";
		cout << "\n";
	}
}

ll max(ll a, ll b, ll c) {
	if(a >= b && a >= c) return a;
	else if(b >= a && b >= c) return b;
	else return c;
}

ll dist(vector<vector<ll>>& g, vector<vector<ll>>& dp, ll i, ll j) {
	if(i >= g.size() || j < 0 || j >= g[0].size()) return 0;
	if(dp[i][j] == -1) {
		dp[i][j] = g[i][j] + max(dist(g, dp, i+1, j-1), dist(g, dp, i+1, j), dist(g, dp, i+1, j+1));
	}
	return dp[i][j];
}

int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> g(n, vector<ll>(m));
		vector<vector<ll>> dp(100, vector<ll>(100, -1));
		repll(i, 0, n) {
			repll(j, 0, m) {
				cin >> g[i][j];
			}
		}
		ll d, mx = 0;
		repll(i, 0, m) {
			d = dist(g, dp, 0, i);
			//cout << "i = " << i << " dist = " << d << "\n";
			if(d > mx) mx = d;
		}
		//print(dp, n, m);
		cout << mx << "\n";
	}



	return 0;
}
