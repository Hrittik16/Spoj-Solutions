#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vvl vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
#define pb push_back
#define F first
#define S second

int main() {
	string s;
	cin >> s;
	while(s[0] != '0') {
			
		vl dp(s.length(), 0);

		rep(i, 0, s.length()) {
			if(i == 0) dp[i] = 1;
		       	else {
				string str;
				str += s[i-1];
				str += s[i];
				//cout << "str = " << str << "\n";
				if(s[i]-'0' != 0) dp[i] = dp[i-1];
				if(stoll(str) > 9 && stoll(str) < 27) {
					if(i == 1) dp[i]++;
					else dp[i] += dp[i-2];
				}
			}	
		}

		cout << dp[s.length()-1] << "\n";

		cin >> s;
	}


	return 0;
}

