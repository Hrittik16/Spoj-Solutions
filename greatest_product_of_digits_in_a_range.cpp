#include <bits/stdc++.h>
using namespace std;

int product(int n) {
	int p = 1;
	while(n) {
		p *= n%10;
		n = n/10;
	}
	return p;
}

int findNum(int n) {
	string r = to_string(n);
	int ans = n;
	int i, j;
	for(i = 0; i < r.size(); i++) {
		if(r[i] == '0') continue;
		string b = r;
		b[i] = ((b[i]-'0')-1)+'0';
		for(j = i+1; j < b.size(); j++) {
			b[j] = '9';
		}
		int num = 0;
		for(j = 0; j < b.size(); j++) {
			num = (num*10)+(b[j]-'0');
		}
		if(num >= 1 && product(ans) < product(num))
			ans = num;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	int x = findNum(n);
	x = product(x);
	cout << x << "\n";
	return 0;
}