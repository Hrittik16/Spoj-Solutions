#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define rep(i, a, b) for(i = a; i < b; i++)
#define repn(i, a, b, c) for(i = a; i < b; i += c)

int main() {

	int t;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		stack<char> st;
		for(auto c : s) {
			if(c >= 'a' && c <= 'z') cout << c;
			else if(c == '+' || c == '-' || c == '*'
					|| c == '/' || c == '^') 
				st.push(c);
			else if(c == ')') {
				cout << st.top();
				st.pop();
			}
		}
		cout << "\n";

	}








	return 0;
}
