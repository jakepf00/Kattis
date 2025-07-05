#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	if (a == "0" || b == "0") {
		cout << "0" << endl;
		return 0;
	}

	int c = 0, d = 0;
	for (auto i : a) if (i == 'S') c++;
	for (auto i : b) if (i == 'S') d++;
	int ans = c * d;

	for (int i = 0; i < ans; i++) cout << "S(";
	cout << "0";
	for (int i = 0; i < ans; i++) cout << ")";
	cout << endl;
}
