#include <bits/stdc++.h>
using namespace std;
int n = 0, c = 0;
vector<int> pos(n);
bool fun(int);
int main() {
	int t, i, j;
	cin >> t;
	while(t--) {
		cin >> n >> c;
		pos.resize(n);
		for(i = 0; i < n; i++) cin >> pos[i];
		sort(pos.begin(), pos.end());
		int lo, hi, mid;
		lo = pos[0];
		hi = pos[pos.size()-1];
		int _max= -1;
		while(1) {
			mid = (lo+hi)/2;
			if(fun(mid)) {
				if(mid > _max) _max = mid;
				lo = mid+1;
			}
			else {
				hi = mid-1;
			}
			if(lo > hi) break;
		}
		
		cout << _max << "\n";
	}

	return 0;	
}	

bool fun(int mid) {
	int count = 1, prev = pos[0];
	for(int i = 1; i < n; i++) {
		if(pos[i]-prev >= mid) {
			count++;
			prev = pos[i];		
		}
		//cout << "## \n";
		if(count == c) return true;
	}
	return false;
}
