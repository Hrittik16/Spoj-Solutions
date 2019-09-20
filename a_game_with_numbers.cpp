#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin >> n;
	if(n < 10) cout << "1\n" << n << "\n";
	else if(n%10 == 0) {
		cout << "2\n";
	}
	else {
		cout << "1\n";
		cout << n%10 << "\n";
	}


	return 0;
}
