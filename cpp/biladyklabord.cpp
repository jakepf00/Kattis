#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	while (cin >> a) {
		char prev = a[0];
		for (int i = 1; i < a.length(); i++) {
			if (a[i] == prev) {
				a.erase(i, 1);
				i--;
			}
			prev = a[i];
		}
		cout << a << " ";
	}
	cout << endl;
}

