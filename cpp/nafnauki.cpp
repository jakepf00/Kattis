#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	string b = "";
	for (int i = a.length() - 1; i >= 0; i--) {
		if (a[i] == '.') {
			b.push_back('.');
			reverse(b.begin(), b.end());
			cout << b << endl;
			return 0;
		}
		b.push_back(a[i]);
	}
}
