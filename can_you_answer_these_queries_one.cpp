#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(a) a.begin(),a.end()
int main() {
	ll n, m, i, j, x, y;
	cin >> n;
	vector<ll> a(n);
	for(i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	while(m--) {
		cin >> x >> y;
		x--; y--;
		ll mx = *min_element(all(a)), val = *min_element(all(a));
		for(i = x; i <= y; i++) {
			mx = max(mx+a[i], a[i]);
			val = max(val, mx);
		}
		cout << val << "\n";
	}



	
	return 0;
}
