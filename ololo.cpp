#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	int flag = 0, val;
	for(auto &x: v) {
		cin >> x;
		if(!flag) val = x, flag = 1;
		else
			val = val^x;
	}
	
	cout << val << "\n";

	return 0;
}
