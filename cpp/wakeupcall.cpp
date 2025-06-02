#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c = 0, d = 0;
	cin >> a >> b;
	while (a--) {
		int e;
		cin >> e;
		c += e;
	}
	while (b--) {
		int e;
		cin >> e;
		d += e;
	}
	if (c > d) cout << "Button 1" << endl;
	else if (c < d) cout << "Button 2" << endl;
	else cout << "Oh no" << endl;
}
