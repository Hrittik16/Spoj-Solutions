#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, i, j;
	cin >> n;
	while(1) {
		if(n == 0) break;
		vector<int> truck(n);
		vector<int> new_truck;
		stack<int> s;
		// 5 3 2 1 4
		// 4 2 3 1
		for(i = 0; i < n; i++) cin >> truck[i];	
		//cout << "1 \n";
		for(i = 0; i < n-1; i++) {
			if(!s.empty()) {
				while(s.top() < truck[i]) {
					new_truck.push_back(s.top());
					s.pop();
					if(s.empty()) break;
				}
			}
			//cout << "2 \n";
			if(truck[i] > truck[i+1]) {
				s.push(truck[i]);	
			}
			
			if(truck[i+1] > truck[i]) new_truck.push_back(truck[i]);
			//cout << "4 \n";
		}
		bool p = false;
		if(!s.empty()) {
			while(s.top() < truck[n-1]) {
					new_truck.push_back(s.top());
					s.pop();
					if(s.empty()) break;
				}
				//cout << "6 \n";
		}
		new_truck.push_back(truck[n-1]);
		while(!s.empty()) {
			new_truck.push_back(s.top());
			s.pop();
		}
		p = true;
		for(i = 0; i < new_truck.size()-1; i++) {
			if(new_truck[i] > new_truck[i+1]) {
				p = false;
				break;
			}
		}
		//cout << "new_truck = ";
		//for(i = 0; i < new_truck.size(); i++) cout << new_truck[i] << " ";
		//cout << "\n";
		if(p) cout << "yes\n";
		else cout << "no\n";
		cin >> n;
	}
	return 0;
}
