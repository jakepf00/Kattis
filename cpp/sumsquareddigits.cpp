#include<bits/stdc++.h>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	for (int i = 1; i <= cases; i++) {
		int thing, base, x;
		cin >> thing >> base >> x;
		int ans = 0;
		while (x > 0) {
			ans += (x % base) * (x % base);
			x /= base;
		}
		cout << i << " " << ans << endl;
	}
}
