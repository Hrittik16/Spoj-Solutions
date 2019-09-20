#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t, s = 1;
	cin >> t;
	while(t--) {
		ll total, num_of_people, i, j;
		cin >> total >> num_of_people;
		vector<ll> stamps(num_of_people);
		for(i = 0; i < num_of_people; i++) cin >> stamps[i];
		sort(stamps.begin(), stamps.end());
		reverse(stamps.begin(), stamps.end());
		ll sum = 0, count = 0;
		for(i = 0; i < num_of_people; i++) {
			sum += stamps[i];
			count++;
			if(sum >= total) break;
		}
		if(sum < total) {
			cout << "Scenario #" << s << ":\n";
			cout << "impossible\n";
			cout << "\n";
		}
		else cout << "Scenario #" << s << ":\n" << count << "\n" << "\n";
		s++;
	}




	return 0;
}
