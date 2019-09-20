#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, i, j;
	cin >> t; 
	while(t--) {
		string k;
		int a, b, c, x, y, z, carry = -1;
		cin >> k;
		bool p = true;
		i = 0;
		while(k[i] == '0') k.erase(k.begin());
		for(i = 0; i < k.length(); i++) {
			if(k[i] != '9') {
				p = false;
				break;
			}
		}
		if(p) {
			cout << "1";
			for(i = 0; i < k.length()-1; i++)
				cout << "0";
			cout << "1\n";
		}
		else {	
			if(k.length() == 1) { cout << "11\n"; continue; }	
			else if(k.length()%2 != 0) {
				a = k.length()/2;
				b = k.length()/2;
				c = k.length()/2;
				a--;
				b++;	
				while(k[a] == k[b]) {
					a--;
					b++;
				}
				if(k[a] >= k[b]) {
				j = (k.length()/2)-1;
				for(i = (k.length()/2)+1; i < k.length(); i++) {
					k[i] = k[j];
					j--;
				}
				}
				else {
				while(carry != 0) {
                                        x = (int)k[c]-'0';
                                        x++;
                                        carry = x/10;
                                        x = x%10;
                                        k[c] = (char)x+'0';
                                        c--;
                                }

				j = (k.length()/2)-1;;
                                for(i = (k.length()/2)+1; i < k.length(); i++) {
                                        k[i] = k[j];
                                        j--;
                                }
				}
			}
			else {
				a = (k.length()/2)-1;
				b = (k.length()/2);
				c = (k.length()/2)-1;
				while(k[a] == k[b]) {
					a--;
					b++;
				}
				if(k[a] >= k[b]) {
					j = (k.length()/2)-1;
					for(i = k.length()/2; i < k.length(); i++) {
						k[i] = k[j];
						j--;
					}
				}
				else {
					while(carry != 0) {
                                        x = (int)k[c]-'0';
                                        x++;
                                        carry = x/10;
                                        x = x%10;
                                        k[c] = (char)x+'0';
                                        c--;
                                	}

					j = (k.length()/2)-1;
                                        for(i = k.length()/2; i < k.length(); i++) {
                                                k[i] = k[j];
                                                j--;
                                        }


				}
			}
			for(i = 0; i < k.length(); i++) {
			cout << k[i];
			}	
			cout << "\n";
		}
		
	}

	return 0;
}
