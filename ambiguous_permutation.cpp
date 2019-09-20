#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n != 0) {
		int i;
		vector<int> a(n);
		for(i = 0; i < n; i++) {
			cin >> a[i];
		}
		int flag = 1;
		for(i = 0; i < n; i++) {
			if(a[a[i]-1] != i+1) {
				flag = 0;
				break;
			}
		}
		if(flag) 
			cout << "ambiguous\n";
		else 
			cout << "not ambiguous\n";
		cin >> n;
	}
}
