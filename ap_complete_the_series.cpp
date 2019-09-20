include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define F first
#define S second
#define string_to_int(s) stoi(s)
#define string_to_ll(s) stoll(s)
#define int_to_string(n) to_string(n)
#define ll_to_string(n) to_string(n)
#define char_to_int(c) c-'0'
#define int_to_char(c) c+'0'

int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll td, td_ls, sum;
		cin >> td >> td_ls >> sum;
		ll n = (sum*2)/(td+td_ls); // (1st term + last term) = (2nd term + second last term) ...
		cout << n <<"\n";
		ll d = (((2*sum)/n)-2*td)/(n-5); 
		/* 
		 * sum = n/2*(td+td_ls)
		 * put td = a+2d and td_ls = a+(n-4)d. Find value of d using it.
		 */
		ll a = td-2*d; // a+2d = td
		for(ll i = 1; i <= n; i++) {
			ll x = a+(i-1)*d;
			cout << x << " ";
		}
		cout << "\n";
	}



	return 0;
}


