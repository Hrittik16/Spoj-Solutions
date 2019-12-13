// Edit Distance
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

int min(int a, int b, int c) {
	return min(min(a, b), c);
}

int edit_distance(char* a, char* b, int x, int y) {
	int dp[x+1][y+1];
	for(int i = 0; i <= x; i++) {
		for(int j = 0; j <= y; j++) {
			if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = 1+min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
		}
	}	
	return dp[x][y];
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		char a[2005], b[2005];
		scanf("%s", a);
		scanf("%s", b);
		int x = strlen(a);
		int y = strlen(b);
		int dist = edit_distance(a, b, x, y);
		cout << dist << "\n";
	}



	return 0;
}
