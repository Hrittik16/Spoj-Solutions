#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, a, b) for(i = a; i < b; i++)
#define repn(i, a, b, c) for(i = a; i < b; i += c)
int main() {
	ll n, count = 0, num;
	cin >> n;
	vl v;
	v.push_back(n);
	int flag = 1;
	while(1) {
		num = 0;
		while(n > 0) {
			num += pow(n%10, 2);
			n = n/10;
		}
		n = num;
		//cout << "n = " << n << "\n";
		count++;
		if(n == 1) break;
		auto it = find(v.begin(), v.end(), n);
		if(it != v.end()) {
			flag = 0;
			break;
		}
		v.push_back(n);
	}
	
	if(flag == 0) cout << "-1\n";
	else cout << count << "\n";
	


	return 0;
}
