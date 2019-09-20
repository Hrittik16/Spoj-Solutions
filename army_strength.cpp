#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define rep(i, a, b) for(i = a; i < b; i++) 
int main() {
	int t;
	cin >> t;
	while(t--) {
		scanf("\n");
		int ng, nm;
		cin >> ng >> nm;
		vi v1(ng);
		vi v2(nm);
		int i, j;
		if(ng == 0 && nm == 0) cout << "uncertain\n";
		else {
		/*
		rep(i, 0, ng) cin >> v1[i];
		rep(i, 0, nm) cin >> v2[i];
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
			while(1) {
				i = 0;
				j = 0;
				if(v1[i] < v2[i]) v1.erase(v1.begin());
				else if(v2[i] < v2[i]) v2.erase(v2.begin());
				else if(v1[i] == v2[i]) v2.erase(v2.begin());
				if(v1.size() == 0 || v2.size() == 0)
					break;
			}
			if(v1.size() == 0) cout << "MechaGodzilla\n";
			else if(v2.size() == 0) cout << "Godzilla\n";
		*/
			rep(i, 0, ng) cin >> v1[i];
			rep(i, 0, nm) cin >> v2[i];
			int g = *max_element(v1.begin(), v1.end());
			int m = *max_element(v2.begin(), v2.end());
			if(g > m) cout << "Godzilla\n";
			else if(m > g) cout << "MechaGodzilla\n";
			else if(m == g) cout << "Godzilla\n";	
		}
		
	}






	return 0;
}
