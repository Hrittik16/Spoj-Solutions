#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define rep(i, a, b) for(i = a; i < b; i++)
#define repn(i, a, b, c) for(i = a; i < b; i += c) 

void multiply(vi& ar, int& i, int m) {
	int carry = 0, j, k, mult;
	for(j = 0; j < i; j++) {
		mult = ar[j]*m + carry;
		ar[j] = mult%10;
		carry = mult/10;
	}
	while(carry > 0) {
		ar.push_back(carry%10);
		carry = carry/10;
		i++;
	}

}

void fact(int n) {
	int i, j, k;
	vi ar;
	ar.push_back(1);
	i = 1;
	for(j = 2; j <= n; j++) {
		multiply(ar, i, j);
	}	
	for(j = i-1; j >= 0; j--) cout << ar[j];
	cout << "\n";
}


int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		fact(n);
	}


	return 0;
}
