#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin >> n;
	// sequence : 1, 1+6, 1+6+12, 1+6+12+18, 1+6+12+18+24, ...
	// p = n-1
	// sequence : 6+12+18+24+...
	// 3n^2 + 3n - p = 0
	// (-3 + sqrt(9+12p))/6 must be an integer
	
	while(n != -1) {	
		if(n == 1) cout << "Y\n";
		else {
			ll p = n-1;
			if(floor(sqrt(9+12*p)) == ceil(sqrt(9+12*p))) {
				ll val = sqrt(9+12*p);
				val = val-3;
				if(val >= 6) {
					if(val%6 == 0) cout << "Y\n";
					else cout << "N\n";
				}
				else cout << "N\n";
			}
			else cout << "N\n";

		}
	
		cin >> n;
	}
	
	return 0;
}
