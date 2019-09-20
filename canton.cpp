#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int count = 0, sum = 0, i = 1;
		while(1) {
			sum += i;
			count++;
			i++;
			if(sum >= n) break;
		}
		int pos = 1;
		i = sum-count+1;
		while(i != n) {
			pos++;
			i++;
		}
		int x, y, x_, y_;
		if(count%2 == 0) {
			x = 1;
			y = count;
			x_ = x;
			y_ = y;
			while(pos != 1) {
				x_ = x;
				y_ = y;
				x++;
				y--;
				pos--;
			}
			cout << "TERM " << n << " IS " << x<< "/" << y << "\n"; 
		}
		else {
			x = count;
			y = 1;
			x_ = x;
			y_ = y;
			while(pos != 1) {
				x_ = x;
				y_ = y;
				x--;
				y++;
				pos--;
			}
			cout << "TERM " << n << " IS " << x<< "/" << y << "\n"; 
		}
	}



	return 0;
}
