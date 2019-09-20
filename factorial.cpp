#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, a, b) for(i = a; i < b; i++)
#define repn(i, a, b, c) for(i = a; i < b; i += c)

int main() {
	ll t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int x = 0;
		while(n >= 5) {
			x += n/5;
			n = n/5;
		}
		cout << x << "\n";
	}




	return 0;
}
