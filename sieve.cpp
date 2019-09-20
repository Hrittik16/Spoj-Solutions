#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for(i = a; i < b; i++) 
#define repn(i, a, b, c) for(i = a; i < b; i+=c)
int main() {
	ll n;
	cin >> n;
	ll i, j;
	ll p[n+1];
	rep(i, 0, n+1) p[i] = 1;
	rep(i, 2, sqrt(n)+1) {
		if(p[i] == 1) {
			repn(j, i*i, n+1, i) {
				if(j%i == 0) p[j] = 0;
			}
		}
	}

	rep(i, 2, n+1) {
		if(p[i] == 1) cout << i << "\n";
	}
	return 0;
}
