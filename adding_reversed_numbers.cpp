#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, a, b) for(i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()

int main() {	
	int n;
	cin >> n;	
	while(n--) {
		int a, b;
		cin >> a >> b;
		int x = 0, y = 0;
		while(a%10 == 0) a = a/10;
		while(b%10 == 0) b = b/10;
		while(a > 0) {
			x = (10*x)+(a%10);
			a = a/10;
		}
		//cout << "x = " << x << "\n";
		while(b > 0) { 
			y = (10*y)+(b%10);
			b = b/10;
		}
		//cout << "y = " << y << "\n";
		int z = x+y;
		//cout << "z = " << z << "\n";
		while(z%10 == 0) z = z/10;
		int rev = 0;
		while(z > 0) {
			rev = (10*rev)+(z%10);
			z = z/10;
		}	
		cout << rev << "\n";

	}


	return 0;
}
