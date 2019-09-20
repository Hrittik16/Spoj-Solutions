#include <bits/stdc++.h>
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

class inv_count {
public:
	ll count, mx;
	inv_count() {
		count = 0;
	}
	void Merge(vl& ar, ll beg, ll mid, ll end) {
		ll n1 = mid-beg+1;
		ll n2 = end-mid;
		ll a[n1];
		ll b[n2];
		ll i, j = 0;
		for(i = 0; i < n1; i++) {
			a[i] = ar[beg+i];
		}
		for(i = 0; i < n2; i++) {
			b[i] = ar[mid+1+i];
		}
		j = 0;
		i = 0;
		ll k = beg;
		while(i < n1 && j < n2) {	
			if(a[i] > b[j]) {
				ar[k] = b[j];
				k++;
				j++;
				count += n1-i;
			}	
			else if(a[i] <= b[j]) {
				ar[k] = a[i];
				k++;
				i++;
			}
		}
		while(i < n1) {
			ar[k] = a[i];
			k++;
			i++;
		}
		while(j < n2) {
			ar[k] = b[j];
			k++;
			j++;
		}
	}

	void MergeSort(vl& ar, ll beg, ll end) {
		if(beg < end) {
			ll mid = beg+(end-beg)/2;
			MergeSort(ar, beg, mid);
			MergeSort(ar, mid+1, end);
			Merge(ar, beg, mid, end);
		}
	}
};

int main() {
	
	ll t;
	cin >> t;
	while(t--) {
		char ch;
		cin.get(ch);
		ll n;
		cin >> n;
		vl a(n);
		repll(i, 0, n) cin >> a[i];
		inv_count obj1;
		obj1.MergeSort(a, 0, n-1);
		cout << obj1.count << "\n";
	}


	return 0;
}

