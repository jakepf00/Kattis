#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	int b;
	cin >> a >> b;
	while (b--) {
		string c;
		cin >> c;
		for (int i = 0; i < c.length(); i++) {
			int d = c[i] - 'A';
			d *= (a[i] - '0');
			d %= 26;
			cout << (char) ('A' + d);
		}
		cout << endl;
	}
}
