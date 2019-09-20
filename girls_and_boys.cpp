#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
int main() { 
	int g,  b; 
	while(1) { 
		cin >> g >> b; 
		if(g == -1 && b == -1) break; 
		if(b > g)  swap(g, b); 
		int val = ceil((float) g/(float) (b+1));
		cout << val << "\n";
	}
	return 0; } 
