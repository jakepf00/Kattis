#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c = 0;
	cin >> a >> b;
	while (a--) {
		int d;
		cin >> d;
		c += d;
	}
	if (b < c) cout << "Neibb" << endl;
	else cout << "Jebb" << endl;
}
