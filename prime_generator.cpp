#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, a, b) for(i = a; i < b; i++)

int main() {
	ll t, m, n;
	cin >> t;
	while(t--) {
		cin >> m >> n;
		ll i, j;
		bool p = true;
		rep(i, m, n+1) {
			p = true;
			if(i == 1) p = false;
			else if(i == 2) p = true;
			else {	
				rep(j, 2, sqrt(i)+1) {
					if(i%j == 0) {
						p = false;
						break;
					}
				}
			}
			if(p == true) cout << i << "\n";
		}
		cout << "\n";
	}	





	return 0;
}
