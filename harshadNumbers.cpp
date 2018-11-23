#include<bits/stdc++.h>

using namespace std;

bool check(long long thing) {
	long long x = thing;
	long long total = 0;
	while (x > 0) {
		total += (x % 10);
		x /= 10;
	}
	if (thing % total == 0) return true;
	return false;
}

int main() {
	long long x;
	cin >> x;
	x--;
	if (x == 0) cout << 1 << endl;
	while(x++) {
		if (check(x)) {
			cout << x << endl;
			return 0;
		}
	}
}
