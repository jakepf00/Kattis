#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, op, b;
	cin >> a >> op >> b;
	if (op == "*") {
		int length = a.length() + b.length() - 2;
		cout << 1;
		while (length--) cout << 0;
		cout << endl;
	}
	else {
		if (a.length() == b.length()) {
			cout << 2;
			for (int i = 1; i < a.length(); i++) cout << 0;
			cout << endl;
		}
		else {
			int c, d;
			c = max(a.length(), b.length());
			d = min(a.length(), b.length());
			cout << 1;
			while (--c) {
				if (c == d) cout << 1;
				else cout << 0;
			}
			cout << endl;
		}
	}
}
