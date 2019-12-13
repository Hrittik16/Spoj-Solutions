#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

int main() {
	int l;
	cin >> l;
	while(l != 0) {
		double pi = 3.141592654;
		double ans = (l*l)/(2*pi);
		cout << fixed << setprecision(2) << ans << "\n";
		cin >> l;
	}

	
	
	return 0;
}
