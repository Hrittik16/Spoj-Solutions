#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll n, val = 0, j,i;
	cin >> n;
	for(i = 1; i <= n; i++) {
		j = i;
		while(i*j <= n) {
			val++;
			j++;
		}
	}
	
	cout << val << "\n";

	return 0;
}
