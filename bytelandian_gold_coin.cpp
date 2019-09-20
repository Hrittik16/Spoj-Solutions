#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vvl vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
#define pb push_back
#define F first
#define S second

ll bytelandian(ll n, vl& dp) {
	if(n < 12) 
		dp[n] = n;
	else if(dp[n] == -1) 
		dp[n] = bytelandian(n/2, dp)+bytelandian(n/3, dp)+bytelandian(n/4, dp);
	return dp[n];
}

int main() {
	
	ll n;
	while(cin >> n) {
		vl dp(n+1, -1);
		ll b = bytelandian(n, dp);
		cout << b << "\n";
	}	
	
	
	return 0;
}	
