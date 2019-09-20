#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		ll val = n*(n+2)*(2*n+1)/8;
		cout << val << "\n";
	}
	return 0;
}
