#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);

	while (a[0] != '|') {
		cout << a[0];
		a.erase(0, 1);
	}
	a.erase(0, 1);

	while (b[0] != '|') {
		cout << b[0];
		b.erase(0, 1);
	}
	b.erase(0, 1);

	cout << " " << a << b << endl;
}
