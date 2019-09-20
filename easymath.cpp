#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vvl vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
#define pb push_back
#define F first
#define S second

ll lcm(ll a, ll b) {
	ll l = (a*b)/__gcd(a, b);
	return l;
}

// Inclusion Exclusion Principle (coding blocks approach)
// A (union) B = |A| + |B| + |A (intersection) B|
// So, this is nothing but subset of a set containing 2 elements
// We can do this for any number of elements
// Sign - (-1)^(length(subset)+1)
// |A (intersection) B| is the lcm(A, B)

ll generate_subset(vl& arr, ll n, ll m) {
	ll total = 0;
	for(ll i = 1; i <= (1<<arr.size())-1; i++) {
		ll val = i, j = 0, mul = -1, len = 0;
		while(val) {
			if(val&1) {
				if(mul == -1) {
					mul = arr[j];
					len++;
				}
				else {
					mul = lcm(mul, arr[j]);
					len++;
				}
			}
			j++;
			val >>= 1;
		}
		//cout << "len = " << len << "\n";
		//cout << "mul = " << mul << "\n";
		ll p = floor((double)m/(double)mul);
		ll q = floor((double)(n-1)/(double)mul);
		total += pow(-1, len+1)*(p-q);
	}
	return total;
}

int main() {
	
	ll n, m, a, d, t;
	cin >> t;
	while(t--) {
		cin >> n >> m >> a >> d;
		vl arr = {a, a+d, a+2*d, a+3*d, a+4*d};

		ll total = generate_subset(arr, n, m);

		cout << (m-n+1)-total << "\n";
	}
	
	return 0;
}


