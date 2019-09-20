#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll modular_expo(ll a, ll b, ll m) {
	if(b == 0) return 1;
	else if(b%2 == 0) return modular_expo((a*a)%m, b/2, m);
	else return (a*modular_expo((a*a)%m, (b-1)/2, m))%m;
}

int main() {
	ll t, a, b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		ll last = modular_expo(a, b, 10);
		cout << last << "\n";
	}


	return 0;
}
